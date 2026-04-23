#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOX360WIRELESSWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171E5340)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOX360WIRELESSWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171E6780)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int Xbox360WirelessWindowsNativeProfile_TypeDefinitionIndex = 37631;

	class Xbox360WirelessWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOX360WIRELESSWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOX360WIRELESSWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
