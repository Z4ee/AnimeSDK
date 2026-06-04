#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710MODEDWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17FE5F90)
#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710MODEDWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FE7060)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int LogitechF710ModeDWindowsNativeProfile_TypeDefinitionIndex = 38347;

	class LogitechF710ModeDWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710MODEDWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710MODEDWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
