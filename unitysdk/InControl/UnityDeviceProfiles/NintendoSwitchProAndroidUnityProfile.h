#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NINTENDOSWITCHPROANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC0F9530)
#define INCONTROL_UNITYDEVICEPROFILES_NINTENDOSWITCHPROANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC0FA790)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NintendoSwitchProAndroidUnityProfile_TypeDefinitionIndex = 39682;

	class NintendoSwitchProAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NINTENDOSWITCHPROANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NINTENDOSWITCHPROANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
