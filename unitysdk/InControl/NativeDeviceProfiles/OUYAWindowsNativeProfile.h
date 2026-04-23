#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_OUYAWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171B1C70)
#define INCONTROL_NATIVEDEVICEPROFILES_OUYAWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171B2F50)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int OUYAWindowsNativeProfile_TypeDefinitionIndex = 37619;

	class OUYAWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_OUYAWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_OUYAWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
