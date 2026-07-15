#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceDirection_TypeDefinitionIndex = 17682;

	enum class CakeRaceDirection : ::System::Int32
	{
		Up = 0,
		Down = 1,
		Left = 2,
		Right = 3,
		Forward = 4,
		Back = 5,
		LeftUp = 6,
		RightUp = 7,
		LeftDown = 8,
		RightDown = 9,
		ForwardUp = 10,
		ForwardDown = 11,
		BackUp = 12,
		BackDown = 13,
	};
}
