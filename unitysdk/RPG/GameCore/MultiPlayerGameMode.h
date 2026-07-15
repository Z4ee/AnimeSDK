#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MultiPlayerGameMode_TypeDefinitionIndex = 10223;

	enum class MultiPlayerGameMode : ::System::Int32
	{
		NONE = 0,
		MATCH3 = 1,
		MARBLE = 2,
		MATCH3_SOLO = 3,
		MATCH3_ROYALE = 4,
		MARBLE_MAINSUB = 5,
		DICE_COMBAT = 7,
		DICE_COMBAT_V2 = 8,
	};
}
