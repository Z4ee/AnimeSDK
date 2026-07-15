#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAnchorUsage_TypeDefinitionIndex = 16495;

	enum class LevelAnchorUsage : ::System::Int32
	{
		Unspecified = 0,
		Camera = 1,
		LookAtCamera = 2,
		Actor = 3,
		GamePlay = 4,
		Coin40 = 5,
	};
}
