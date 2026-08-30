#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_FLAREANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B5AC670)
#define INCONTROL_UNITYDEVICEPROFILES_FLAREANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5AD8E0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int FlareAndroidUnityProfile_TypeDefinitionIndex = 39658;

	class FlareAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_FLAREANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_FLAREANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
