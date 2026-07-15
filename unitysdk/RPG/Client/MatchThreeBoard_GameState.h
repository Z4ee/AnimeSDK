#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard_GameState_TypeDefinitionIndex = 62962;

	enum class MatchThreeBoard_GameState : ::System::Int32
	{
		Idle = 0,
		SelectionStarted = 1,
		PropUse = 2,
		PropSelectionStarted = 3,
	};
}
