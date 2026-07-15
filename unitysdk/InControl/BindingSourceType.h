#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int BindingSourceType_TypeDefinitionIndex = 38640;

	enum class BindingSourceType : ::System::Int32
	{
		None = 0,
		DeviceBindingSource = 1,
		KeyBindingSource = 2,
		MouseBindingSource = 3,
		UnknownDeviceBindingSource = 4,
	};
}
