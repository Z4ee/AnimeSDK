#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOX360ROCKCANDYANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xB54B250)
#define INCONTROL_UNITYDEVICEPROFILES_XBOX360ROCKCANDYANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xB54C540)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int Xbox360RockCandyAndroidUnityProfile_TypeDefinitionIndex = 38835;

	class Xbox360RockCandyAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360ROCKCANDYANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360ROCKCANDYANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
