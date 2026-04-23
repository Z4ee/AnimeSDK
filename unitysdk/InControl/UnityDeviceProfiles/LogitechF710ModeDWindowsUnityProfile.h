#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF710MODEDWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1727A220)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF710MODEDWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1727B850)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechF710ModeDWindowsUnityProfile_TypeDefinitionIndex = 37380;

	class LogitechF710ModeDWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF710MODEDWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF710MODEDWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
