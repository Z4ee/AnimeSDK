#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int InputDeviceClass_TypeDefinitionIndex = 38682;

	enum class InputDeviceClass : ::System::Int32
	{
		Unknown = 0,
		Keyboard = 1,
		Mouse = 2,
		Controller = 3,
		Remote = 4,
		ArcadeStick = 5,
		FlightStick = 6,
		DancePad = 7,
		Guitar = 8,
		DrumKit = 9,
		ArcadePad = 10,
		Throttle = 11,
		TouchScreen = 12,
	};
}
