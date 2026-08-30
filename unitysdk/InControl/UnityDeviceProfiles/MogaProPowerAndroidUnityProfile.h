#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROPOWERANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC0E9080)
#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROPOWERANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC0EA2B0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MogaProPowerAndroidUnityProfile_TypeDefinitionIndex = 39675;

	class MogaProPowerAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAPROPOWERANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAPROPOWERANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
