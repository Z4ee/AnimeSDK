#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_NINTENDOSWITCHPROWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171B0570)
#define INCONTROL_NATIVEDEVICEPROFILES_NINTENDOSWITCHPROWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171B1B80)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int NintendoSwitchProWindowsNativeProfile_TypeDefinitionIndex = 37618;

	class NintendoSwitchProWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_NINTENDOSWITCHPROWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_NINTENDOSWITCHPROWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
