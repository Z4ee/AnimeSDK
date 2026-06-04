#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_POWERAMINIPROEXCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17FFF030)
#define INCONTROL_NATIVEDEVICEPROFILES_POWERAMINIPROEXCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FFF120)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PowerAMiniProExControllerMacNativeProfile_TypeDefinitionIndex = 38250;

	class PowerAMiniProExControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_POWERAMINIPROEXCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_POWERAMINIPROEXCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
