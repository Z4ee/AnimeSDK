#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GREENTHROTTLEATLASANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17259130)
#define INCONTROL_UNITYDEVICEPROFILES_GREENTHROTTLEATLASANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1725A680)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GreenThrottleAtlasAndroidUnityProfile_TypeDefinitionIndex = 37265;

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
