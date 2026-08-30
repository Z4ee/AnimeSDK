#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHMODEDAMAZONUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B5DDA30)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHMODEDAMAZONUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5DEC90)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechModeDAmazonUnityProfile_TypeDefinitionIndex = 39631;

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
