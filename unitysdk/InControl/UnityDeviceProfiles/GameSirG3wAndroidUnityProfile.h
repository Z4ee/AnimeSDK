#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GAMESIRG3WANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B5B3700)
#define INCONTROL_UNITYDEVICEPROFILES_GAMESIRG3WANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5B4970)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GameSirG3wAndroidUnityProfile_TypeDefinitionIndex = 39661;

	class GameSirG3wAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMESIRG3WANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMESIRG3WANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
