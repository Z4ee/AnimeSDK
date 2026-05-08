#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int GamepadButtonEx_TypeDefinitionIndex = 52821;

	enum class GamepadButtonEx : ::System::Int32
	{
		LStickLeft = 2,
		LStickDown = 1,
		RStickRight = 7,
		RStickUp = 4,
		LStickUp = 0,
		LStickRight = 3,
		RStickDown = 5,
		RStickLeft = 6,
	};
}
