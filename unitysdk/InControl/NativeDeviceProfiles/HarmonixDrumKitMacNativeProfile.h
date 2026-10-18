#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HARMONIXDRUMKITMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA17110)
#define INCONTROL_NATIVEDEVICEPROFILES_HARMONIXDRUMKITMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA17190)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HarmonixDrumKitMacNativeProfile_TypeDefinitionIndex = 41120;

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
