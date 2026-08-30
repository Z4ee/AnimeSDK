#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFBOOM_METHOD_3_93CA88E9CC7304EB_OFFSET UNITYSDK_OFFSET(0x1CFA65B0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFBOOM_METHOD_3_FE9F22056249F713_OFFSET UNITYSDK_OFFSET(0x1CFA6550)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFBOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA65A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_SelfBoom_TypeDefinitionIndex = 15578;

	class ChenLingBattleAbility_SelfBoom : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Damage; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Radius; // 0x18
		::System::Boolean HasSecondBoom; // 0x20
		::RPG::GameCore::BaseChenLingBattleValueGetter* DelaySecondBoom; // 0x28
		::RPG::GameCore::ChenLingBattleEffectConfig* BoomEffectConfig; // 0x30
		::RPG::GameCore::ChenLingBattleEffectConfig* HitEffectConfig; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFBOOM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FE9F22056249F713(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_SelfBoom*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_SelfBoom*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFBOOM_METHOD_3_FE9F22056249F713_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_93CA88E9CC7304EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_SelfBoom* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_SelfBoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFBOOM_METHOD_3_93CA88E9CC7304EB_OFFSET))(a1, a2);
		}
	};
}
