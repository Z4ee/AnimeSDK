#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LEVELUPBLACKHAWKWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xB4D5A80)
#define INCONTROL_UNITYDEVICEPROFILES_LEVELUPBLACKHAWKWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4D6BD0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LevelUpBlackHawkWindowsUnityProfile_TypeDefinitionIndex = 38915;

	class LevelUpBlackHawkWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LEVELUPBLACKHAWKWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LEVELUPBLACKHAWKWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
