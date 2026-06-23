#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int Direction_TypeDefinitionIndex = 55209;

	enum class Direction : ::System::Int32
	{
		Right = 1,
		None = 4,
		Left = 3,
		Up = 0,
		Down = 2,
	};
}
