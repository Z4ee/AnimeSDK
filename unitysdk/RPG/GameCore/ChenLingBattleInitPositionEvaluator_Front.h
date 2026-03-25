#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleInitPositionEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_FRONT_METHOD_3_10C444FD65F485FA_OFFSET UNITYSDK_OFFSET(0x1707F870)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_FRONT_METHOD_3_E6F49B6B1948E31B_OFFSET UNITYSDK_OFFSET(0x1707F7D0)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_FRONT__CTOR_OFFSET UNITYSDK_OFFSET(0x1707F860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleInitPositionEvaluator_Front_TypeDefinitionIndex = 14446;

	class ChenLingBattleInitPositionEvaluator_Front : public ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_FRONT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E6F49B6B1948E31B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Front*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Front*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_FRONT_METHOD_3_E6F49B6B1948E31B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_10C444FD65F485FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Front* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Front*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_FRONT_METHOD_3_10C444FD65F485FA_OFFSET))(a1, a2);
		}
	};
}
