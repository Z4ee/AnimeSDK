#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MOGAXP5XPLUSANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180B33A0)
#define INCONTROL_UNITYDEVICEPROFILES_MOGAXP5XPLUSANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180B4710)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MogaXP5XPlusAndroidUnityProfile_TypeDefinitionIndex = 38009;

	class MogaXP5XPlusAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAXP5XPLUSANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAXP5XPLUSANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
