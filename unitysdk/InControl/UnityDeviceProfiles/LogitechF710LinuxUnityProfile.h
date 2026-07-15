#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF710LINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xB4E2F30)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF710LINUXUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4E41A0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechF710LinuxUnityProfile_TypeDefinitionIndex = 38844;

	class LogitechF710LinuxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF710LINUXUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF710LINUXUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
