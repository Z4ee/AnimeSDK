#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHG920RACINGWHEELMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BA9BF0)
#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHG920RACINGWHEELMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA9C80)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int LogitechG920RacingWheelMacNativeProfile_TypeDefinitionIndex = 31743;

	class LogitechG920RacingWheelMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHG920RACINGWHEELMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHG920RACINGWHEELMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
