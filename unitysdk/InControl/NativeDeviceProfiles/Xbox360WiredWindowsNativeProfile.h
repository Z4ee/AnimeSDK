#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOX360WIREDWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x132E9030)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOX360WIREDWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x132EA0D0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int Xbox360WiredWindowsNativeProfile_TypeDefinitionIndex = 39170;

	class Xbox360WiredWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOX360WIREDWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOX360WIREDWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
