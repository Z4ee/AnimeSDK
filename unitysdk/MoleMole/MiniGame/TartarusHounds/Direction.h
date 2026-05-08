#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int Direction_TypeDefinitionIndex = 75302;

	enum class Direction : ::System::Int32
	{
		None = 4,
		Left = 3,
		Down = 2,
		Right = 1,
		Up = 0,
	};
}
