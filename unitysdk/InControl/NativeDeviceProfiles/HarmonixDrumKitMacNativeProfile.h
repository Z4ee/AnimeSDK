#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HARMONIXDRUMKITMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18EAC390)
#define INCONTROL_NATIVEDEVICEPROFILES_HARMONIXDRUMKITMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EAC410)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HarmonixDrumKitMacNativeProfile_TypeDefinitionIndex = 39823;

	class HarmonixDrumKitMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HARMONIXDRUMKITMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HARMONIXDRUMKITMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
