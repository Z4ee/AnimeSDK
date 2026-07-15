#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int PlatformFlags_TypeDefinitionIndex = 44235;

	enum class PlatformFlags : ::System::UInt64
	{
		None = 0x0,
		LoadingInEditor = 0x1,
		DisableOverlay = 0x2,
		DisableSocialOverlay = 0x4,
		Reserved1 = 0x8,
		WindowsEnableOverlayD3D9 = 0x10,
		WindowsEnableOverlayD3D10 = 0x20,
		WindowsEnableOverlayOpengl = 0x40,
	};
}
