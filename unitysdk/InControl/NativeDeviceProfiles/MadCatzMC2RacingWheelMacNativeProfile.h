#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZMC2RACINGWHEELMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BAA890)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZMC2RACINGWHEELMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BAA920)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzMC2RacingWheelMacNativeProfile_TypeDefinitionIndex = 31761;

	class MadCatzMC2RacingWheelMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZMC2RACINGWHEELMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZMC2RACINGWHEELMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
