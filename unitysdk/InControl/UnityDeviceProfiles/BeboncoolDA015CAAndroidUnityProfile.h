#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_BEBONCOOLDA015CAANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xB49B7B0)
#define INCONTROL_UNITYDEVICEPROFILES_BEBONCOOLDA015CAANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xB49CA20)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int BeboncoolDA015CAAndroidUnityProfile_TypeDefinitionIndex = 38784;

	class BeboncoolDA015CAAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BEBONCOOLDA015CAANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BEBONCOOLDA015CAANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
