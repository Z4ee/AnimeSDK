#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF510MODEDWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17FE2850)
#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF510MODEDWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FE3920)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int LogitechF510ModeDWindowsNativeProfile_TypeDefinitionIndex = 38345;

	class LogitechF510ModeDWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF510MODEDWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF510MODEDWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
