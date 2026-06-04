#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510MODEXWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1809D100)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510MODEXWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1809E3E0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechF510ModeXWindowsUnityProfile_TypeDefinitionIndex = 38111;

	class LogitechF510ModeXWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510MODEXWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510MODEXWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
