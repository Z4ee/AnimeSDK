#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREVISUALEFFECT_METHOD_3_E0D3226175C0EFD6_OFFSET UNITYSDK_OFFSET(0x1CFA5DA0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREVISUALEFFECT_METHOD_3_F6332C8A489CCB0C_OFFSET UNITYSDK_OFFSET(0x1CFA5D40)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREVISUALEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA5D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_FireVisualEffect_TypeDefinitionIndex = 15563;

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

		static ::System::Void Method_3_F6332C8A489CCB0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_FireVisualEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_FireVisualEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREVISUALEFFECT_METHOD_3_F6332C8A489CCB0C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E0D3226175C0EFD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_FireVisualEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_FireVisualEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREVISUALEFFECT_METHOD_3_E0D3226175C0EFD6_OFFSET))(a1, a2);
		}
	};
}
