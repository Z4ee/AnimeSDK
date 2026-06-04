#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROCESSOPINSKILLEXECUTING_METHOD_3_B6EC97F06089435C_OFFSET UNITYSDK_OFFSET(0x19A84B90)
#define RPG_GAMECORE_PROCESSOPINSKILLEXECUTING_METHOD_3_BDCAF61B275BE4EA_OFFSET UNITYSDK_OFFSET(0x19A84B10)
#define RPG_GAMECORE_PROCESSOPINSKILLEXECUTING__CTOR_OFFSET UNITYSDK_OFFSET(0x19A84B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ProcessOpInSkillExecuting_TypeDefinitionIndex = 21255;

	class ProcessOpInSkillExecuting : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROCESSOPINSKILLEXECUTING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BDCAF61B275BE4EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ProcessOpInSkillExecuting*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ProcessOpInSkillExecuting*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROCESSOPINSKILLEXECUTING_METHOD_3_BDCAF61B275BE4EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B6EC97F06089435C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ProcessOpInSkillExecuting* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ProcessOpInSkillExecuting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROCESSOPINSKILLEXECUTING_METHOD_3_B6EC97F06089435C_OFFSET))(a1, a2);
		}
	};
}
