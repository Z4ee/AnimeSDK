#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GAMESIRG3SANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17249230)
#define INCONTROL_UNITYDEVICEPROFILES_GAMESIRG3SANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1724A840)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GameSirG3sAndroidUnityProfile_TypeDefinitionIndex = 37261;

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
