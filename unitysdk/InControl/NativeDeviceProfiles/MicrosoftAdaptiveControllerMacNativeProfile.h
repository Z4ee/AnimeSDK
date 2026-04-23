#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MICROSOFTADAPTIVECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171AB570)
#define INCONTROL_NATIVEDEVICEPROFILES_MICROSOFTADAPTIVECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171AB600)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MicrosoftAdaptiveControllerMacNativeProfile_TypeDefinitionIndex = 37498;

	class MicrosoftAdaptiveControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MICROSOFTADAPTIVECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MICROSOFTADAPTIVECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
