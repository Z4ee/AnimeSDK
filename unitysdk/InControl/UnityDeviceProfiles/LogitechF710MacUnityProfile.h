#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF710MACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1809F890)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF710MACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180A0B40)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechF710MacUnityProfile_TypeDefinitionIndex = 38055;

	class LogitechF710MacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF710MACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF710MACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
