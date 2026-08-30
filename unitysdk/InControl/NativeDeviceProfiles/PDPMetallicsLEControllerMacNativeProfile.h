#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PDPMETALLICSLECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B530420)
#define INCONTROL_NATIVEDEVICEPROFILES_PDPMETALLICSLECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5304A0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PDPMetallicsLEControllerMacNativeProfile_TypeDefinitionIndex = 39907;

	class PDPMetallicsLEControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PDPMETALLICSLECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PDPMETALLICSLECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
