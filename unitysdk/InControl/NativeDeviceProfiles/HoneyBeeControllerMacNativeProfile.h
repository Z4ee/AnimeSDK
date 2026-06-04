#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HONEYBEECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17FDBB80)
#define INCONTROL_NATIVEDEVICEPROFILES_HONEYBEECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FDBC00)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoneyBeeControllerMacNativeProfile_TypeDefinitionIndex = 38159;

	class HoneyBeeControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HONEYBEECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HONEYBEECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
