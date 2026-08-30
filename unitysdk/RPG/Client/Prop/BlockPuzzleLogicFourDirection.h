#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BlockPuzzleLogicFourDirection_TypeDefinitionIndex = 78319;

	enum class BlockPuzzleLogicFourDirection : ::System::Int32
	{
		Right = 0,
		Down = 1,
		Left = 2,
		Up = 3,
		Zero = 4,
	};
}
