#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HARMONIXKEYBOARDMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15B9AF50)
#define INCONTROL_NATIVEDEVICEPROFILES_HARMONIXKEYBOARDMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B9AFE0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HarmonixKeyboardMacNativeProfile_TypeDefinitionIndex = 31706;

	class HarmonixKeyboardMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HARMONIXKEYBOARDMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HARMONIXKEYBOARDMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
