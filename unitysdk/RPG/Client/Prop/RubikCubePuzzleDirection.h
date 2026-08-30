#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleDirection_TypeDefinitionIndex = 78348;

	enum class RubikCubePuzzleDirection : ::System::Int32
	{
		UP = 0,
		DOWN = 1,
		FRONT = 2,
		BACK = 3,
		LEFT = 4,
		RIGHT = 5,
	};
}
