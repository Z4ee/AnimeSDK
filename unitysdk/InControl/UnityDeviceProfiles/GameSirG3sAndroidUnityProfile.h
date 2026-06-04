#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GAMESIRG3SANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18076F50)
#define INCONTROL_UNITYDEVICEPROFILES_GAMESIRG3SANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18078220)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GameSirG3sAndroidUnityProfile_TypeDefinitionIndex = 37993;

	class GameSirG3sAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMESIRG3SANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMESIRG3SANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
