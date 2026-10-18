#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREVISUALEFFECT_METHOD_3_016084C9718F1AA4_OFFSET UNITYSDK_OFFSET(0x1D552DE0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREVISUALEFFECT_METHOD_3_5ED10E954AB21DCE_OFFSET UNITYSDK_OFFSET(0x1D552D80)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREVISUALEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D552DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_FireVisualEffect_TypeDefinitionIndex = 15736;

	class ChenLingBattleAbility_FireVisualEffect : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::ChenLingBattleEffectConfig* EffectConfig; // 0x10
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* EffectTargets; // 0x18
		::RPG::MVector3 ExtraPositionDelta; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREVISUALEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5ED10E954AB21DCE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_FireVisualEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_FireVisualEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREVISUALEFFECT_METHOD_3_5ED10E954AB21DCE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_016084C9718F1AA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_FireVisualEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_FireVisualEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREVISUALEFFECT_METHOD_3_016084C9718F1AA4_OFFSET))(a1, a2);
		}
	};
}
