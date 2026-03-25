#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GAMECUBEMAYFLASHWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15C48DD0)
#define INCONTROL_UNITYDEVICEPROFILES_GAMECUBEMAYFLASHWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C4A3E0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GameCubeMayflashWindowsUnityProfile_TypeDefinitionIndex = 31651;

	class GameCubeMayflashWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMECUBEMAYFLASHWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMECUBEMAYFLASHWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
