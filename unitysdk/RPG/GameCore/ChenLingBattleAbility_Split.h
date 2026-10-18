#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleAirMotionConfig; }
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SPLIT_METHOD_3_982BE337D272F25A_OFFSET UNITYSDK_OFFSET(0x1D581690)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SPLIT_METHOD_3_F4380A3511C07833_OFFSET UNITYSDK_OFFSET(0x1D5816F0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SPLIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5816E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_Split_TypeDefinitionIndex = 15746;

	class ChenLingBattleAbility_Split : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Creator; // 0x10
		::RPG::MVector3 Scale; // 0x18
		::RPG::GameCore::BaseChenLingBattleValueGetter* Num; // 0x28
		::RPG::GameCore::BaseChenLingBattleValueGetter* Delay; // 0x30
		::RPG::GameCore::BaseChenLingBattleValueGetter* HpPercent; // 0x38
		::RPG::GameCore::BaseChenLingBattleValueGetter* MaxSplitCount; // 0x40
		::RPG::GameCore::ChenLingBattleAirMotionConfig* AirMotionConfig; // 0x48
		::RPG::GameCore::ChenLingBattleEffectConfig* EffectConfig; // 0x50
		::RPG::GameCore::ChenLingBattleEffectConfig* TrailEffectConfig; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SPLIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_982BE337D272F25A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_Split*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_Split*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SPLIT_METHOD_3_982BE337D272F25A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F4380A3511C07833(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_Split* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_Split*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SPLIT_METHOD_3_F4380A3511C07833_OFFSET))(a1, a2);
		}
	};
}
