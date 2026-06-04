#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_DROIDBOXXBOXANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1805D780)
#define INCONTROL_UNITYDEVICEPROFILES_DROIDBOXXBOXANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1805EA40)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int DroidBoxXboxAndroidUnityProfile_TypeDefinitionIndex = 37980;

	class DroidBoxXboxAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_DROIDBOXXBOXANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_DROIDBOXXBOXANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
