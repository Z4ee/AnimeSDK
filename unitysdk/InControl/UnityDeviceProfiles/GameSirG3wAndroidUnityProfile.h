#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GAMESIRG3WANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xB4BD980)
#define INCONTROL_UNITYDEVICEPROFILES_GAMESIRG3WANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4BEBF0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GameSirG3wAndroidUnityProfile_TypeDefinitionIndex = 38802;

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
