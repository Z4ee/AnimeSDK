#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_GAMECUBEMAYFLASHWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B513970)
#define INCONTROL_NATIVEDEVICEPROFILES_GAMECUBEMAYFLASHWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B514B70)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int GameCubeMayflashWindowsNativeProfile_TypeDefinitionIndex = 40006;

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
