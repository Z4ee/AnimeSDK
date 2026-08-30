#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_GAMECUBEWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B514C60)
#define INCONTROL_NATIVEDEVICEPROFILES_GAMECUBEWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B515A30)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int GameCubeWindowsNativeProfile_TypeDefinitionIndex = 40007;

	class GameCubeWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_GAMECUBEWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_GAMECUBEWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
