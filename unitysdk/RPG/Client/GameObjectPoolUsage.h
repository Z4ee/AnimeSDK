#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GameObjectPoolUsage_TypeDefinitionIndex = 59536;

	enum class GameObjectPoolUsage : ::System::Int32
	{
		Default = 0,
		Effect = 1,
		Model = 2,
		UI = 3,
		Streaming = 4,
		Puzzle = 5,
		Count = 6,
	};
}
