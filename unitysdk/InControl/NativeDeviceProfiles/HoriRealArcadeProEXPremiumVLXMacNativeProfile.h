#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROEXPREMIUMVLXMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B5191E0)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROEXPREMIUMVLXMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B519260)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriRealArcadeProEXPremiumVLXMacNativeProfile_TypeDefinitionIndex = 39842;

	class HoriRealArcadeProEXPremiumVLXMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROEXPREMIUMVLXMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROEXPREMIUMVLXMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
