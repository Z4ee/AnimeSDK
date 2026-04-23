#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_ADDPHYSICALFORCE_METHOD_3_5C57FB614F6FC6A6_OFFSET UNITYSDK_OFFSET(0x187DDF30)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_ADDPHYSICALFORCE_METHOD_3_CDF3693EE0A0F9DC_OFFSET UNITYSDK_OFFSET(0x187DDED0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_ADDPHYSICALFORCE__CTOR_OFFSET UNITYSDK_OFFSET(0x187DDF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_AddPhysicalForce_TypeDefinitionIndex = 14898;

	class ChenLingBattleAbility_AddPhysicalForce : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Force; // 0x18
		::RPG::GameCore::BaseChenLingBattleValueGetter* Duration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_ADDPHYSICALFORCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CDF3693EE0A0F9DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_AddPhysicalForce*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_AddPhysicalForce*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_ADDPHYSICALFORCE_METHOD_3_CDF3693EE0A0F9DC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5C57FB614F6FC6A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_AddPhysicalForce* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_AddPhysicalForce*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_ADDPHYSICALFORCE_METHOD_3_5C57FB614F6FC6A6_OFFSET))(a1, a2);
		}
	};
}
