#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVKAIFIGHTINGSTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171999D0)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVKAIFIGHTINGSTICKMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17199AA0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriRealArcadeProVKaiFightingStickMacNativeProfile_TypeDefinitionIndex = 37448;

	class HoriRealArcadeProVKaiFightingStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVKAIFIGHTINGSTICKMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVKAIFIGHTINGSTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
