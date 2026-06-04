#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710MODEXWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17FE7150)
#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710MODEXWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FE8250)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int LogitechF710ModeXWindowsNativeProfile_TypeDefinitionIndex = 38348;

	class LogitechF710ModeXWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710MODEXWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710MODEXWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
