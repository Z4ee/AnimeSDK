#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710CONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BA5A20)
#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710CONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA5AB0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int LogitechF710ControllerMacNativeProfile_TypeDefinitionIndex = 31742;

	class LogitechF710ControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710CONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710CONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
