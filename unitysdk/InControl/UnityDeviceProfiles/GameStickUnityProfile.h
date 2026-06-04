#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GAMESTICKUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1807BC70)
#define INCONTROL_UNITYDEVICEPROFILES_GAMESTICKUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1807CD50)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GameStickUnityProfile_TypeDefinitionIndex = 38074;

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
