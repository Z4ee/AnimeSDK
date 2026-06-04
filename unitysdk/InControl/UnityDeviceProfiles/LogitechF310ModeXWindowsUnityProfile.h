#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEXWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18096DE0)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEXWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180980C0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechF310ModeXWindowsUnityProfile_TypeDefinitionIndex = 38109;

	class LogitechF310ModeXWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEXWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEXWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
