#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class ChenLingBattleBulletConfig; }
namespace RPG::GameCore { class ChenLingBattleTriggerCallback; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREPROJECTILE_METHOD_3_43B618CF4960EB68_OFFSET UNITYSDK_OFFSET(0x1C376F60)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREPROJECTILE_METHOD_3_917110D54B68D242_OFFSET UNITYSDK_OFFSET(0x1C376FC0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREPROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C376FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_FireProjectile_TypeDefinitionIndex = 15099;

	class ChenLingBattleAbility_FireProjectile : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Attacker; // 0x10
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x18
		::RPG::GameCore::ChenLingBattleBulletConfig* BulletConfig; // 0x20
		::RPG::GameCore::ChenLingBattleTriggerCallback* OnHitCallback; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREPROJECTILE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_43B618CF4960EB68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_FireProjectile*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_FireProjectile*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREPROJECTILE_METHOD_3_43B618CF4960EB68_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_917110D54B68D242(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_FireProjectile* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_FireProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREPROJECTILE_METHOD_3_917110D54B68D242_OFFSET))(a1, a2);
		}
	};
}
