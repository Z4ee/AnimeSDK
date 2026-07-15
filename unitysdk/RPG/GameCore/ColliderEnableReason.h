#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ColliderEnableReason_TypeDefinitionIndex = 54669;

	enum class ColliderEnableReason : ::System::Int32
	{
		Default = 0,
		Task = 1,
		GroupVisibility = 2,
		Puzzle = 3,
		ForceDisableColliderByAnimation = 4,
		Phantom = 5,
		EraFlip = 6,
		FiveDimGame = 7,
		TimeRewind = 8,
		Performance = 9,
		OnlineGuest = 10,
	};
}
