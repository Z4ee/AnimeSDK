#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GAMESTICKUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15C51240)
#define INCONTROL_UNITYDEVICEPROFILES_GAMESTICKUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C525F0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GameStickUnityProfile_TypeDefinitionIndex = 31622;

	class GameStickUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMESTICKUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMESTICKUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
