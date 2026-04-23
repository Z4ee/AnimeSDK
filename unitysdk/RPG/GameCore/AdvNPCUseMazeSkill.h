#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVNPCUSEMAZESKILL_METHOD_3_50849937266838AC_OFFSET UNITYSDK_OFFSET(0x18657D00)
#define RPG_GAMECORE_ADVNPCUSEMAZESKILL_METHOD_3_BEC542455A55012F_OFFSET UNITYSDK_OFFSET(0x18657D90)
#define RPG_GAMECORE_ADVNPCUSEMAZESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x18657D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNPCUseMazeSkill_TypeDefinitionIndex = 18902;

	class AdvNPCUseMazeSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUseFail; // 0x20
		::System::Single SkillCD; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCUSEMAZESKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_50849937266838AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCUseMazeSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCUseMazeSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCUSEMAZESKILL_METHOD_3_50849937266838AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BEC542455A55012F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCUseMazeSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCUseMazeSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCUSEMAZESKILL_METHOD_3_BEC542455A55012F_OFFSET))(a1, a2);
		}
	};
}
