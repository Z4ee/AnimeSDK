#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIPADEXTURBOCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17199430)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIPADEXTURBOCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171994C0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriPadEXTurboControllerMacNativeProfile_TypeDefinitionIndex = 37439;

	class HoriPadEXTurboControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIPADEXTURBOCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIPADEXTURBOCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
