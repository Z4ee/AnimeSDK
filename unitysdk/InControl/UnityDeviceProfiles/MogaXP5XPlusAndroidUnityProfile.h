#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MOGAXP5XPLUSANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15C921D0)
#define INCONTROL_UNITYDEVICEPROFILES_MOGAXP5XPLUSANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C938B0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MogaXP5XPlusAndroidUnityProfile_TypeDefinitionIndex = 31557;

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
