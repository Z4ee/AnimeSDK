#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_POWERAAIRFLOWCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BC43B0)
#define INCONTROL_NATIVEDEVICEPROFILES_POWERAAIRFLOWCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BC4440)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PowerAAirflowControllerMacNativeProfile_TypeDefinitionIndex = 31796;

	class PowerAAirflowControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_POWERAAIRFLOWCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_POWERAAIRFLOWCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
