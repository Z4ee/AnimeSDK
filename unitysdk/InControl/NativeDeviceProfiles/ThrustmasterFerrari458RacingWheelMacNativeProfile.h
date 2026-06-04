#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERFERRARI458RACINGWHEELMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1801A690)
#define INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERFERRARI458RACINGWHEELMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1801A740)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int ThrustmasterFerrari458RacingWheelMacNativeProfile_TypeDefinitionIndex = 38275;

	class ThrustmasterFerrari458RacingWheelMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERFERRARI458RACINGWHEELMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERFERRARI458RACINGWHEELMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
