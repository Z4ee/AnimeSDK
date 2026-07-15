#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GREENTHROTTLEATLASANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xB4C9AC0)
#define INCONTROL_UNITYDEVICEPROFILES_GREENTHROTTLEATLASANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4CAC90)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GreenThrottleAtlasAndroidUnityProfile_TypeDefinitionIndex = 38805;

	class GreenThrottleAtlasAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GREENTHROTTLEATLASANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GREENTHROTTLEATLASANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
