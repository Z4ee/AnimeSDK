#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIBLUESOLOCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18EAC5D0)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIBLUESOLOCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EAC650)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriBlueSoloControllerMacNativeProfile_TypeDefinitionIndex = 39827;

	class HoriBlueSoloControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIBLUESOLOCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIBLUESOLOCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
