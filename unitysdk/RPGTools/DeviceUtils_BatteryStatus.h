#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools
{
	inline static constexpr unsigned int DeviceUtils_BatteryStatus_TypeDefinitionIndex = 35147;

	enum class DeviceUtils_BatteryStatus : ::System::Int32
	{
		Unknown = 0,
		Charging = 1,
		DisCharging = 2,
		NotCharging = 3,
		Full = 4,
	};
}
