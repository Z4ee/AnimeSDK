#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SDLXboxOneNativeProfile_ProductId_TypeDefinitionIndex = 39136;

	enum class SDLXboxOneNativeProfile_ProductId : ::System::UInt16
	{
		XBOX_ONE_S = 0x2EA,
		XBOX_ONE_S_REV1_BLUETOOTH = 0x2E0,
		XBOX_ONE_S_REV2_BLUETOOTH = 0x2FD,
		XBOX_ONE_RAW_INPUT_CONTROLLER = 0x2FF,
		XBOX_ONE_XINPUT_CONTROLLER = 0x2FE,
	};
}
