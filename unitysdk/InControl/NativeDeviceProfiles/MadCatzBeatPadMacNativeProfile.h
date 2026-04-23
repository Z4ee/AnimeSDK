#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZBEATPADMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171A79D0)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZBEATPADMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171A7A60)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzBeatPadMacNativeProfile_TypeDefinitionIndex = 37469;

	class MadCatzBeatPadMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZBEATPADMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZBEATPADMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
