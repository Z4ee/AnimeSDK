#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_FLAREPLAYANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC0ABBD0)
#define INCONTROL_UNITYDEVICEPROFILES_FLAREPLAYANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC0ACCF0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int FlarePlayAndroidUnityProfile_TypeDefinitionIndex = 39659;

	class FlarePlayAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_FLAREPLAYANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_FLAREPLAYANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
