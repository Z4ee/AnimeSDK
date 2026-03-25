#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LEVELUPBLACKHAWKWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15C69BF0)
#define INCONTROL_UNITYDEVICEPROFILES_LEVELUPBLACKHAWKWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C6B0A0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LevelUpBlackHawkWindowsUnityProfile_TypeDefinitionIndex = 31655;

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
