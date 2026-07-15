#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueSubPlaneType_TypeDefinitionIndex = 13518;

	enum class RogueSubPlaneType : ::System::Int32
	{
		Unknown = 0,
		SimulatedRogue = 1,
		ChessRogue = 2,
		TournRogue = 3,
		RelicRogue = 4,
		ArcadeRogue = 5,
		MagicRogue = 6,
	};
}
