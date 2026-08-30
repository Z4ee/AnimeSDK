#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHCHILLSTREAMCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B51A610)
#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHCHILLSTREAMCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B51A690)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int LogitechChillStreamControllerMacNativeProfile_TypeDefinitionIndex = 39856;

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
