#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_APPLETVREMOTEUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B58E4A0)
#define INCONTROL_UNITYDEVICEPROFILES_APPLETVREMOTEUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B58EFB0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int AppleTVRemoteUnityProfile_TypeDefinitionIndex = 39696;

	class AppleTVRemoteUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_APPLETVREMOTEUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_APPLETVREMOTEUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
