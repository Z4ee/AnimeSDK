#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_DROIDBOXXBOXANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15C2D980)
#define INCONTROL_UNITYDEVICEPROFILES_DROIDBOXXBOXANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C2EFA0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int DroidBoxXboxAndroidUnityProfile_TypeDefinitionIndex = 31528;

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
