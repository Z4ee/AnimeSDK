#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int InputDeviceTransportType_TypeDefinitionIndex = 38692;

	enum class InputDeviceTransportType : ::System::UInt16
	{
		Unknown = 0x0,
		USB = 0x1,
		Bluetooth = 0x2,
	};
}
