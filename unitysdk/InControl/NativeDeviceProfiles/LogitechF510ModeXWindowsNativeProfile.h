#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF510MODEXWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17FE3A10)
#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF510MODEXWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FE4B10)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int LogitechF510ModeXWindowsNativeProfile_TypeDefinitionIndex = 38346;

	class LogitechF510ModeXWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF510MODEXWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF510MODEXWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
