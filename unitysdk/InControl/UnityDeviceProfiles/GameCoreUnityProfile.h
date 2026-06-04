#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GAMECOREUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18073670)
#define INCONTROL_UNITYDEVICEPROFILES_GAMECOREUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18074A90)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GameCoreUnityProfile_TypeDefinitionIndex = 38073;

	class GameCoreUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMECOREUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMECOREUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
