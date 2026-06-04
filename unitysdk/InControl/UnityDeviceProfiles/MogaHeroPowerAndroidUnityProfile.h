#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MOGAHEROPOWERANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180ABDE0)
#define INCONTROL_UNITYDEVICEPROFILES_MOGAHEROPOWERANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180AD080)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MogaHeroPowerAndroidUnityProfile_TypeDefinitionIndex = 38006;

	class MogaHeroPowerAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAHEROPOWERANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAHEROPOWERANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
