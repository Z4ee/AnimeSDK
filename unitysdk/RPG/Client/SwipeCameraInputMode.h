#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SwipeCameraInputMode_TypeDefinitionIndex = 56956;

	enum class SwipeCameraInputMode : ::System::Int32
	{
		Joystick = 0,
		MouseDrag = 1,
		MouseMove = 2,
	};
}
