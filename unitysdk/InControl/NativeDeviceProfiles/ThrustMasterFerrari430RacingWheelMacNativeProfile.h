#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERFERRARI430RACINGWHEELMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1801A3B0)
#define INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERFERRARI430RACINGWHEELMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1801A430)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int ThrustMasterFerrari430RacingWheelMacNativeProfile_TypeDefinitionIndex = 38273;

	class ThrustMasterFerrari430RacingWheelMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERFERRARI430RACINGWHEELMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERFERRARI430RACINGWHEELMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
