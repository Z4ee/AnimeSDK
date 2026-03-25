#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
#include "unitysdk/RPG/GameCore/ChenLingTeamSelectorType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_RANDOMNSOLDIERS_METHOD_3_0E33905BC1887B77_OFFSET UNITYSDK_OFFSET(0x17082180)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_RANDOMNSOLDIERS_METHOD_3_49E0A78AC2D9404B_OFFSET UNITYSDK_OFFSET(0x17082120)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_RANDOMNSOLDIERS__CTOR_OFFSET UNITYSDK_OFFSET(0x17082170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_RandomNSoldiers_TypeDefinitionIndex = 14460;

	class ChenLingBattleTargetEvaluator_RandomNSoldiers : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::RPG::GameCore::ChenLingTeamSelectorType TeamSelectorType; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Number; // 0x18
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* DropTargetEvaluator; // 0x20
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* SourceTargetEvaluator; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_RANDOMNSOLDIERS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_49E0A78AC2D9404B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_RandomNSoldiers*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_RandomNSoldiers*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_RANDOMNSOLDIERS_METHOD_3_49E0A78AC2D9404B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0E33905BC1887B77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_RandomNSoldiers* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_RandomNSoldiers*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_RANDOMNSOLDIERS_METHOD_3_0E33905BC1887B77_OFFSET))(a1, a2);
		}
	};
}
