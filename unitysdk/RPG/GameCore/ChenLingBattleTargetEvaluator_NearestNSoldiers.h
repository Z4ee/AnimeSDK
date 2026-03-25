#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
#include "unitysdk/RPG/GameCore/ChenLingTeamSelectorType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNSOLDIERS_METHOD_3_1751DE410019168B_OFFSET UNITYSDK_OFFSET(0x17081E00)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNSOLDIERS_METHOD_3_21C80D36979FB235_OFFSET UNITYSDK_OFFSET(0x17081DA0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNSOLDIERS__CTOR_OFFSET UNITYSDK_OFFSET(0x17081DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_NearestNSoldiers_TypeDefinitionIndex = 14459;

	class ChenLingBattleTargetEvaluator_NearestNSoldiers : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::RPG::GameCore::ChenLingTeamSelectorType TeamSelectorType; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Number; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNSOLDIERS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_21C80D36979FB235(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNSoldiers*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNSoldiers*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNSOLDIERS_METHOD_3_21C80D36979FB235_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1751DE410019168B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNSoldiers* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNSoldiers*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNSOLDIERS_METHOD_3_1751DE410019168B_OFFSET))(a1, a2);
		}
	};
}
