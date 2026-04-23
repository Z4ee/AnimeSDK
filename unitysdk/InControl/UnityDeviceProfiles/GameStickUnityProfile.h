#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GAMESTICKUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1724EC20)
#define INCONTROL_UNITYDEVICEPROFILES_GAMESTICKUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1724FFD0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GameStickUnityProfile_TypeDefinitionIndex = 37342;

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
