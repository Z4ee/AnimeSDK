#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHMODEDAMAZONUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180A33A0)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHMODEDAMAZONUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180A4670)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechModeDAmazonUnityProfile_TypeDefinitionIndex = 37964;

	class LogitechModeDAmazonUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHMODEDAMAZONUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHMODEDAMAZONUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
