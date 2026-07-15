#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools
{
	inline static constexpr unsigned int DeviceUtils_NetworkType_TypeDefinitionIndex = 45144;

	enum class DeviceUtils_NetworkType : ::System::Int32
	{
		Unknown = 0,
		Cellular = 1,
		Wifi = 2,
		Bluetooth = 3,
		Ethernet = 4,
		Vpn = 5,
		WifiAware = 6,
	};
}
