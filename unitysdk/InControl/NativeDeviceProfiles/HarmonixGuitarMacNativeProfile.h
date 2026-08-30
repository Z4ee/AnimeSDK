#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HARMONIXGUITARMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18EAC420)
#define INCONTROL_NATIVEDEVICEPROFILES_HARMONIXGUITARMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EAC4A0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HarmonixGuitarMacNativeProfile_TypeDefinitionIndex = 39824;

	class HarmonixGuitarMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HARMONIXGUITARMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HARMONIXGUITARMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
