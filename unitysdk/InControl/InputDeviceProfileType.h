#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int InputDeviceProfileType_TypeDefinitionIndex = 40845;

	enum class InputDeviceProfileType : ::System::Int32
	{
		Unity = 0,
		Native = 1,
	};
}
