#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::InputSystem
{
	inline static constexpr unsigned int KeyboardType_TypeDefinitionIndex = 9807;

	enum class KeyboardType : ::System::Int32
	{
		None = 0,
		Keyboard = 1,
		Gamepad = 2,
		Joypad = 3,
	};
}
