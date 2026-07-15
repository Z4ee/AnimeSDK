#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraDuelSettleReason_TypeDefinitionIndex = 39492;

	enum class ChimeraDuelSettleReason : ::System::Int32
	{
		None = 0,
		Win = 1,
		Lose = 2,
		Draw = 3,
		Quit = 4,
		EarlyWin = 5,
	};
}
