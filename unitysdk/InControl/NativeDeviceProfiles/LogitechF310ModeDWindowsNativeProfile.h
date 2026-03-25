#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF310MODEDWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15B9EDC0)
#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF310MODEDWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA0230)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int LogitechF310ModeDWindowsNativeProfile_TypeDefinitionIndex = 31891;

	class LogitechF310ModeDWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF310MODEDWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF310MODEDWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
