#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int GamepadButtonEx_TypeDefinitionIndex = 55435;

	enum class GamepadButtonEx : ::System::Int32
	{
		RStickRight = 7,
		RStickUp = 4,
		RStickLeft = 6,
		LStickUp = 0,
		LStickRight = 3,
		LStickDown = 1,
		LStickLeft = 2,
		RStickDown = 5,
	};
}
