#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueClientAdventureRoomStatus_TypeDefinitionIndex = 55832;

	enum class RogueClientAdventureRoomStatus : ::System::Int32
	{
		None = 0,
		Prepare = 1,
		Started = 2,
		Stopped = 3,
		RogurAdventureRoomStatusRewardTaken = 4,
	};
}
