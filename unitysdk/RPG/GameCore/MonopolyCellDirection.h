#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyCellDirection_TypeDefinitionIndex = 15599;

	enum class MonopolyCellDirection : ::System::Int32
	{
		Unknown = 0,
		Left = 1,
		LeftUp = 2,
		Up = 3,
		RightUp = 4,
		Right = 5,
		RightDown = 6,
		Down = 7,
		LeftDown = 8,
	};
}
