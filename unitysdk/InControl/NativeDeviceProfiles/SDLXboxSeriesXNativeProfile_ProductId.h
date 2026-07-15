#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SDLXboxSeriesXNativeProfile_ProductId_TypeDefinitionIndex = 39138;

	enum class SDLXboxSeriesXNativeProfile_ProductId : ::System::UInt16
	{
		XBOX_SERIES_X = 0xB12,
		XBOX_SERIES_X_BLUETOOTH = 0xB13,
		XBOX_SERIES_X_POWERA = 0x2001,
	};
}
