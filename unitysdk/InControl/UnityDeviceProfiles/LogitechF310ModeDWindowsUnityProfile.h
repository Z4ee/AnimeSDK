#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEDWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1726B9C0)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEDWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1726CFD0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechF310ModeDWindowsUnityProfile_TypeDefinitionIndex = 37376;

	class LogitechF310ModeDWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEDWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEDWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
