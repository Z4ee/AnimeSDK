#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int EDeviceGPUType_TypeDefinitionIndex = 36111;

	enum class EDeviceGPUType : ::System::Int32
	{
		eUnknow = 0,
		ePCNV = 1,
		ePCAmd = 2,
		ePCIntelOrOther = 3,
		ePS5 = 4,
		ePS4 = 5,
		eIOSMetal = 6,
		eAndroidMailGles = 7,
		eAndroidPowerVRGles = 8,
		eAndroidAdrenoGles = 9,
		eAndroidMailVulkan = 10,
		eAndroidPowerVRVulkan = 11,
		eAndroidAdrenoVulkan = 12,
	};
}
