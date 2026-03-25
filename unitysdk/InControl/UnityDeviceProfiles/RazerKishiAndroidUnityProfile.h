#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_RAZERKISHIANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15CD2D20)
#define INCONTROL_UNITYDEVICEPROFILES_RAZERKISHIANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD4420)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int RazerKishiAndroidUnityProfile_TypeDefinitionIndex = 31569;

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
