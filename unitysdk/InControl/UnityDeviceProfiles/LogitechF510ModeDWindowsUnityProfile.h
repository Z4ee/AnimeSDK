#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510MODEDWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1809A930)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510MODEDWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1809BBF0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechF510ModeDWindowsUnityProfile_TypeDefinitionIndex = 38110;

	class LogitechF510ModeDWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510MODEDWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510MODEDWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
