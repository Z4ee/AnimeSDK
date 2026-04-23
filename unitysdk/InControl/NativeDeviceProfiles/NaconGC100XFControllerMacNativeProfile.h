#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_NACONGC100XFCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171AECD0)
#define INCONTROL_NATIVEDEVICEPROFILES_NACONGC100XFCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171AED60)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int NaconGC100XFControllerMacNativeProfile_TypeDefinitionIndex = 37503;

	class NaconGC100XFControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_NACONGC100XFCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_NACONGC100XFCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
