#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MatchThreeTimelineBattleField_MatchThreeTimelineType_TypeDefinitionIndex = 76079;

	enum class MatchThreeTimelineBattleField_MatchThreeTimelineType : ::System::Int32
	{
		Win = 0,
		Lose = 1,
		Tie = 2,
		Fadein = 3,
	};
}
