#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510LINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15C725A0)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510LINUXUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C73C00)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechF510LinuxUnityProfile_TypeDefinitionIndex = 31583;

	class LogitechF510LinuxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510LINUXUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510LINUXUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
