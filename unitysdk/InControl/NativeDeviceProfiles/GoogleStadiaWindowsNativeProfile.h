#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_GOOGLESTADIAWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18EAAEC0)
#define INCONTROL_NATIVEDEVICEPROFILES_GOOGLESTADIAWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EAC180)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int GoogleStadiaWindowsNativeProfile_TypeDefinitionIndex = 40008;

	class GoogleStadiaWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_GOOGLESTADIAWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_GOOGLESTADIAWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
