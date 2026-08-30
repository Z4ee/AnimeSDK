#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_INTERRUPTSKILLEXECUTION_METHOD_3_03393DCBCD1D401E_OFFSET UNITYSDK_OFFSET(0x1D1AE3B0)
#define RPG_GAMECORE_INTERRUPTSKILLEXECUTION_METHOD_3_CA351F8DE2B832A1_OFFSET UNITYSDK_OFFSET(0x1D1AE3F0)
#define RPG_GAMECORE_INTERRUPTSKILLEXECUTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1AE3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InterruptSkillExecution_TypeDefinitionIndex = 22873;

	class InterruptSkillExecution : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSucceed; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFailure; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERRUPTSKILLEXECUTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_03393DCBCD1D401E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InterruptSkillExecution*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InterruptSkillExecution*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERRUPTSKILLEXECUTION_METHOD_3_03393DCBCD1D401E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CA351F8DE2B832A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InterruptSkillExecution* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InterruptSkillExecution*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERRUPTSKILLEXECUTION_METHOD_3_CA351F8DE2B832A1_OFFSET))(a1, a2);
		}
	};
}
