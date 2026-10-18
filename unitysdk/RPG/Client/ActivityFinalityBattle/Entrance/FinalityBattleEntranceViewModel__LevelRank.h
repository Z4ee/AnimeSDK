#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityFinalityBattle::Entrance
{
	inline static constexpr unsigned int FinalityBattleEntranceViewModel__LevelRank_TypeDefinitionIndex = 82081;

	enum class FinalityBattleEntranceViewModel__LevelRank : ::System::Int32
	{
		EasyNotPassed = 0,
		HardNotPassed = 1,
		C = 2,
		B = 3,
		A = 4,
		S = 5,
		SS = 6,
	};
}
