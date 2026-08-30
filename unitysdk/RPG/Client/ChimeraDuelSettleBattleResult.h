#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelSettleBattleResult_TypeDefinitionIndex = 63389;

	enum class ChimeraDuelSettleBattleResult : ::System::Int32
	{
		Win = 0,
		Lose = 1,
		Draw = 2,
	};
}
