#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF310CONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15B9D640)
#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF310CONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B9D710)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int LogitechF310ControllerMacNativeProfile_TypeDefinitionIndex = 31740;

	class LogitechF310ControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF310CONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF310CONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
