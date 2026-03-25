#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleEffectTier; }
namespace RPG::GameCore { class ChenLingBattleLaserSplitConfig; }
namespace RPG::GameCore { class ChenLingBattleResource_OnHit; }
namespace RPG::GameCore { class ChenLingBattleTriggerCallback; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_CREATELASER_METHOD_3_09E468168EF41340_OFFSET UNITYSDK_OFFSET(0x17079950)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_CREATELASER_METHOD_3_0FE73CBFDE0BF0AE_OFFSET UNITYSDK_OFFSET(0x170799B0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_CREATELASER__CTOR_OFFSET UNITYSDK_OFFSET(0x170799A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_CreateLaser_TypeDefinitionIndex = 14437;

	class ChenLingBattleAbility_CreateLaser : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::System::String* BulletPath; // 0x10
		::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* EffectTiers; // 0x18
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Attacker; // 0x20
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x28
		::System::String* FireAttachPointName; // 0x30
		::System::String* HitAttachPointName; // 0x38
		::RPG::GameCore::BaseChenLingBattleValueGetter* DamageInterval; // 0x40
		::RPG::GameCore::BaseChenLingBattleValueGetter* Duration; // 0x48
		::RPG::GameCore::ChenLingBattleResource_OnHit* OnHitResource; // 0x50
		::RPG::GameCore::ChenLingBattleTriggerCallback* OnHitCallback; // 0x58
		::RPG::GameCore::ChenLingBattleLaserSplitConfig* SplitConfig; // 0x60
		::System::Single Delay; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_CREATELASER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_09E468168EF41340(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_CreateLaser*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_CreateLaser*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_CREATELASER_METHOD_3_09E468168EF41340_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0FE73CBFDE0BF0AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_CreateLaser* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_CreateLaser*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_CREATELASER_METHOD_3_0FE73CBFDE0BF0AE_OFFSET))(a1, a2);
		}
	};
}
