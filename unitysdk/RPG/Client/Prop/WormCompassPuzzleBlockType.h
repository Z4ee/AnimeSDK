#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleBlockType_TypeDefinitionIndex = 78449;

	enum class WormCompassPuzzleBlockType : ::System::Int32
	{
		Empty = 0,
		Block = 1,
		TreasureBox = 2,
	};
}
