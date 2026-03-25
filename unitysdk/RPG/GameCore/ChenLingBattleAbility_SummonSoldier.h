#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SUMMONSOLDIER_METHOD_3_9BBC0ADFF83AF48F_OFFSET UNITYSDK_OFFSET(0x1707B8A0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SUMMONSOLDIER_METHOD_3_BF3B3DA5A2A9077F_OFFSET UNITYSDK_OFFSET(0x1707B900)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SUMMONSOLDIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1707B8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_SummonSoldier_TypeDefinitionIndex = 14434;

	class ChenLingBattleAbility_SummonSoldier : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* SoldierID; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Level; // 0x18
		::RPG::GameCore::BaseChenLingBattleValueGetter* SoldierUnitID; // 0x20
		::RPG::GameCore::BaseChenLingBattleValueGetter* Num; // 0x28
		::RPG::GameCore::BaseChenLingBattleValueGetter* Distance; // 0x30
		::RPG::GameCore::BaseChenLingBattleValueGetter* WaitTime; // 0x38
		::RPG::GameCore::ChenLingBattleEffectConfig* EffectConfig; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SUMMONSOLDIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9BBC0ADFF83AF48F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_SummonSoldier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_SummonSoldier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SUMMONSOLDIER_METHOD_3_9BBC0ADFF83AF48F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BF3B3DA5A2A9077F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_SummonSoldier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_SummonSoldier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SUMMONSOLDIER_METHOD_3_BF3B3DA5A2A9077F_OFFSET))(a1, a2);
		}
	};
}
