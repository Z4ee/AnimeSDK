#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SDLPlayStation4NativeProfile_ProductId_TypeDefinitionIndex = 39131;

	enum class SDLPlayStation4NativeProfile_ProductId : ::System::UInt16
	{
		SONY_DS4 = 0x5C4,
		SONY_DS4_DONGLE = 0xBA0,
		SONY_DS4_SLIM = 0x9CC,
	};
}
