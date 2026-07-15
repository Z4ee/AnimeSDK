#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMode_TypeDefinitionIndex = 10235;

	enum class RogueMode : ::System::Int32
	{
		None = 0,
		CosmosRogue = 1,
		ChessRogue = 2,
		TournRogue = 3,
		ArcadeRogue = 4,
		MagicRogue = 5,
	};
}
