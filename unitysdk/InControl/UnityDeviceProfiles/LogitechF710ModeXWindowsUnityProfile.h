#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF710MODEXWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1727B940)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF710MODEXWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1727CF90)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechF710ModeXWindowsUnityProfile_TypeDefinitionIndex = 37381;

	class LogitechF710ModeXWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF710MODEXWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF710MODEXWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
