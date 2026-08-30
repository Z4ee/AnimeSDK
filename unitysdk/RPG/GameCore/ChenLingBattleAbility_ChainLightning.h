#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }
namespace RPG::GameCore { class ChenLingBattleResource_OnHit; }
namespace RPG::GameCore { class ChenLingBattleTriggerCallback; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_CHAINLIGHTNING_METHOD_3_E258C0C9AF29E3E4_OFFSET UNITYSDK_OFFSET(0x1E006C80)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_CHAINLIGHTNING_METHOD_3_FA6C927D298F0C0E_OFFSET UNITYSDK_OFFSET(0x1E006C20)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_CHAINLIGHTNING__CTOR_OFFSET UNITYSDK_OFFSET(0x1E006C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_ChainLightning_TypeDefinitionIndex = 15561;

	class ChenLingBattleAbility_ChainLightning : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Damage; // 0x18
		::RPG::GameCore::BaseChenLingBattleValueGetter* ChainNum; // 0x20
		::RPG::GameCore::BaseChenLingBattleValueGetter* ChainRange; // 0x28
		::RPG::GameCore::BaseChenLingBattleValueGetter* JumpInterval; // 0x30
		::RPG::GameCore::ChenLingBattleEffectConfig* EffectConfig; // 0x38
		::RPG::GameCore::ChenLingBattleResource_OnHit* OnHitResource; // 0x40
		::RPG::GameCore::ChenLingBattleTriggerCallback* OnHitCallback; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_CHAINLIGHTNING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FA6C927D298F0C0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_ChainLightning*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_ChainLightning*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_CHAINLIGHTNING_METHOD_3_FA6C927D298F0C0E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E258C0C9AF29E3E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_ChainLightning* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_ChainLightning*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_CHAINLIGHTNING_METHOD_3_E258C0C9AF29E3E4_OFFSET))(a1, a2);
		}
	};
}
