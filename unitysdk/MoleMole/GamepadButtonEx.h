#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int GamepadButtonEx_TypeDefinitionIndex = 55928;

	enum class GamepadButtonEx : ::System::Int32
	{
		LStickDown = 1,
		RStickLeft = 6,
		RStickUp = 4,
		RStickRight = 7,
		LStickRight = 3,
		LStickLeft = 2,
		LStickUp = 0,
		RStickDown = 5,
	};
}
