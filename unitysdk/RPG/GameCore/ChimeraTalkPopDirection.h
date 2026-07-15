#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTalkPopDirection_TypeDefinitionIndex = 15213;

	enum class ChimeraTalkPopDirection : ::System::Int32
	{
		None = 0,
		Up = 1,
		UpRight = 2,
		Right = 3,
		DownRight = 4,
		Down = 5,
		DownLeft = 6,
		Left = 7,
		UpLeft = 8,
	};
}
