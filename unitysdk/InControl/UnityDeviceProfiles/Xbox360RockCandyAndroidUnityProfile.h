#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOX360ROCKCANDYANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18108CB0)
#define INCONTROL_UNITYDEVICEPROFILES_XBOX360ROCKCANDYANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1810A000)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int Xbox360RockCandyAndroidUnityProfile_TypeDefinitionIndex = 38027;

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
