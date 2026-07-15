#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int InputDeviceProfileType_TypeDefinitionIndex = 38689;

	enum class InputDeviceProfileType : ::System::Int32
	{
		Unity = 0,
		Native = 1,
	};
}
