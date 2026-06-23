#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PC::Native::OS
{
	inline static constexpr unsigned int Win32_DeviceForm_TypeDefinitionIndex = 20243;

	enum class Win32_DeviceForm : ::System::Int32
	{
		DEVICEFAMILYDEVICEFORM_GAMING_HANDHELD = 46,
	};
}
