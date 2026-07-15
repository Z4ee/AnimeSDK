#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATIONANALOGJOYSTICKWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x132CAA40)
#define INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATIONANALOGJOYSTICKWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x132CB950)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PlayStationAnalogJoystickWindowsNativeProfile_TypeDefinitionIndex = 39164;

	class PlayStationAnalogJoystickWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATIONANALOGJOYSTICKWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATIONANALOGJOYSTICKWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
