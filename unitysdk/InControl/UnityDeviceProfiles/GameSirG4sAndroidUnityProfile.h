#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GAMESIRG4SANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B5B4A60)
#define INCONTROL_UNITYDEVICEPROFILES_GAMESIRG4SANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5B5CD0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GameSirG4sAndroidUnityProfile_TypeDefinitionIndex = 39662;

	class GameSirG4sAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMESIRG4SANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMESIRG4SANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
