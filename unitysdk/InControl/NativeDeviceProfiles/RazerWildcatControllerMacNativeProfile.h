#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_RAZERWILDCATCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171C5EF0)
#define INCONTROL_NATIVEDEVICEPROFILES_RAZERWILDCATCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171C5F80)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int RazerWildcatControllerMacNativeProfile_TypeDefinitionIndex = 37529;

	class RazerWildcatControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_RAZERWILDCATCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_RAZERWILDCATCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
