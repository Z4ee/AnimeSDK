#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVXMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17199AB0)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVXMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17199B40)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriRealArcadeProVXMacNativeProfile_TypeDefinitionIndex = 37449;

	class HoriRealArcadeProVXMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVXMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVXMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
