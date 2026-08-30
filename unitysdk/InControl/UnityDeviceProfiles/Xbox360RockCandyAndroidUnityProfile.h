#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOX360ROCKCANDYANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B641000)
#define INCONTROL_UNITYDEVICEPROFILES_XBOX360ROCKCANDYANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6422F0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int Xbox360RockCandyAndroidUnityProfile_TypeDefinitionIndex = 39694;

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
