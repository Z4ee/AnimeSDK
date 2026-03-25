#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHCHILLSTREAMCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15B9D460)
#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHCHILLSTREAMCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B9D4F0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int LogitechChillStreamControllerMacNativeProfile_TypeDefinitionIndex = 31737;

	class LogitechChillStreamControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHCHILLSTREAMCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHCHILLSTREAMCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
