#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
#include "unitysdk/RPG/GameCore/ChenLingTeamSelectorType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleInitPositionEvaluator; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNTHSOLDIER_METHOD_3_2F515DC2B1A93D72_OFFSET UNITYSDK_OFFSET(0x1CFAD650)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNTHSOLDIER_METHOD_3_471AF9CC0EF2B76C_OFFSET UNITYSDK_OFFSET(0x1CFAD6B0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNTHSOLDIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFAD6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_NearestNthSoldier_TypeDefinitionIndex = 15592;

	class ChenLingBattleTargetEvaluator_NearestNthSoldier : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Range; // 0x10
		::System::Int32 Index; // 0x18
		::RPG::GameCore::ChenLingTeamSelectorType TeamSelectorType; // 0x1C
		::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator* InitPositionEvaluator; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNTHSOLDIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2F515DC2B1A93D72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNthSoldier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNthSoldier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNTHSOLDIER_METHOD_3_2F515DC2B1A93D72_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_471AF9CC0EF2B76C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNthSoldier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNthSoldier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNTHSOLDIER_METHOD_3_471AF9CC0EF2B76C_OFFSET))(a1, a2);
		}
	};
}
