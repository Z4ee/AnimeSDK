#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_STEAMWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x149619C0)
#define INCONTROL_NATIVEDEVICEPROFILES_STEAMWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x14962A60)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SteamWindowsNativeProfile_TypeDefinitionIndex = 40025;

	class SteamWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_STEAMWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_STEAMWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
