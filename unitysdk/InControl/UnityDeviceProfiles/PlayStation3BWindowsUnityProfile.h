#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3BWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180CF180)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3BWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180D0470)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation3BWindowsUnityProfile_TypeDefinitionIndex = 38125;

	class PlayStation3BWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3BWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3BWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
