#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHWINGMANWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC0DE370)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHWINGMANWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC0DF5D0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechWingManWindowsUnityProfile_TypeDefinitionIndex = 39781;

	class LogitechWingManWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHWINGMANWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHWINGMANWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
