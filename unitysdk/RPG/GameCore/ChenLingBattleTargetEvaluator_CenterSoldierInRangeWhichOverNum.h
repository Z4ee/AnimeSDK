#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
#include "unitysdk/RPG/GameCore/ChenLingTeamSelectorType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_CENTERSOLDIERINRANGEWHICHOVERNUM_METHOD_3_776481424355A4C4_OFFSET UNITYSDK_OFFSET(0x196238F0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_CENTERSOLDIERINRANGEWHICHOVERNUM_METHOD_3_C0DF2D20B178C81A_OFFSET UNITYSDK_OFFSET(0x19623890)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_CENTERSOLDIERINRANGEWHICHOVERNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x196238E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_CenterSoldierInRangeWhichOverNum_TypeDefinitionIndex = 15004;

	class ChenLingBattleTargetEvaluator_CenterSoldierInRangeWhichOverNum : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::RPG::GameCore::ChenLingTeamSelectorType TeamSelectorType; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Number; // 0x18
		::RPG::GameCore::BaseChenLingBattleValueGetter* Range; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_CENTERSOLDIERINRANGEWHICHOVERNUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C0DF2D20B178C81A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_CenterSoldierInRangeWhichOverNum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_CenterSoldierInRangeWhichOverNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_CENTERSOLDIERINRANGEWHICHOVERNUM_METHOD_3_C0DF2D20B178C81A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_776481424355A4C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_CenterSoldierInRangeWhichOverNum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_CenterSoldierInRangeWhichOverNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_CENTERSOLDIERINRANGEWHICHOVERNUM_METHOD_3_776481424355A4C4_OFFSET))(a1, a2);
		}
	};
}
