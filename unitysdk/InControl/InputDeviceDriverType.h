#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int InputDeviceDriverType_TypeDefinitionIndex = 38683;

	enum class InputDeviceDriverType : ::System::UInt16
	{
		Unknown = 0x0,
		HID = 0x1,
		USB = 0x2,
		Bluetooth = 0x3,
		XInput = 0x4,
		DirectInput = 0x5,
		RawInput = 0x6,
		AppleGameController = 0x7,
		SDLJoystick = 0x8,
		SDLController = 0x9,
	};
}
