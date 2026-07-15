#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueSubMode_TypeDefinitionIndex = 10236;

	enum class RogueSubMode : ::System::Int32
	{
		None = 0,
		CosmosRogue = 101,
		CosmosRogueEndless = 102,
		ChessRogue = 201,
		ChessRogueNous = 202,
		TournRogue = 301,
		ArcadeRogue = 401,
		MagicRogue = 501,
	};
}
