#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHDRIVEFXRACINGWHEELMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1719AF80)
#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHDRIVEFXRACINGWHEELMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1719B010)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int LogitechDriveFXRacingWheelMacNativeProfile_TypeDefinitionIndex = 37459;

	class LogitechDriveFXRacingWheelMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHDRIVEFXRACINGWHEELMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHDRIVEFXRACINGWHEELMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
