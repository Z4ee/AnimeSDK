#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChessDirection_TypeDefinitionIndex = 74835;

	enum class ChessDirection : ::System::Int32
	{
		Right = 0,
		RightDown = 1,
		Down = 2,
		LeftDown = 3,
		Left = 4,
		LeftUp = 5,
		Up = 6,
		RightUp = 7,
	};
}
