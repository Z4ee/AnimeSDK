#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_GAMECUBEMAYFLASHWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17192C50)
#define INCONTROL_NATIVEDEVICEPROFILES_GAMECUBEMAYFLASHWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17194270)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int GameCubeMayflashWindowsNativeProfile_TypeDefinitionIndex = 37607;

	class GameCubeMayflashWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_GAMECUBEMAYFLASHWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_GAMECUBEMAYFLASHWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
