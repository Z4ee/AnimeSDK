#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools
{
	inline static constexpr unsigned int DeviceUtils_WifiState_TypeDefinitionIndex = 45145;

	enum class DeviceUtils_WifiState : ::System::Int32
	{
		Disabling = 0,
		Disabled = 1,
		Enabling = 2,
		Enabled = 3,
		Unknown = 4,
	};
}
