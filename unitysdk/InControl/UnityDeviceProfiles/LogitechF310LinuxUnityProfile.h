#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310LINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC0CAC70)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310LINUXUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC0CBF00)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechF310LinuxUnityProfile_TypeDefinitionIndex = 39701;

	class LogitechF310LinuxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310LINUXUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310LINUXUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
