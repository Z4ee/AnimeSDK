#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_RAZERKISHIANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180EA370)
#define INCONTROL_UNITYDEVICEPROFILES_RAZERKISHIANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180EB6E0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int RazerKishiAndroidUnityProfile_TypeDefinitionIndex = 38021;

	class RazerKishiAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_RAZERKISHIANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_RAZERKISHIANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
