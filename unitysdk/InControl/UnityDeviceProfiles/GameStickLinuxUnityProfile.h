#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GAMESTICKLINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC0B3FC0)
#define INCONTROL_UNITYDEVICEPROFILES_GAMESTICKLINUXUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC0B5050)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GameStickLinuxUnityProfile_TypeDefinitionIndex = 39698;

	class GameStickLinuxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMESTICKLINUXUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMESTICKLINUXUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
