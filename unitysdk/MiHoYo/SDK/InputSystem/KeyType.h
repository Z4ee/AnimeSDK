#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::InputSystem
{
	inline static constexpr unsigned int KeyType_TypeDefinitionIndex = 9810;

	enum class KeyType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		WithShift = 2,
		Joystick0 = 0,
		Joystick1 = 1,
		Joystick2 = 2,
		Joystick3 = 3,
		Joystick4 = 4,
		Joystick5 = 5,
		Joystick6 = 6,
		Joystick7 = 7,
		Joystick8 = 8,
	};
}
