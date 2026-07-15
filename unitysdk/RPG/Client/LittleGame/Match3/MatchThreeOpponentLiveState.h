#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Match3
{
	inline static constexpr unsigned int MatchThreeOpponentLiveState_TypeDefinitionIndex = 40472;

	enum class MatchThreeOpponentLiveState : ::System::Int32
	{
		Alive = 0,
		Dying = 1,
		Dead = 2,
		Leave = 3,
	};
}
