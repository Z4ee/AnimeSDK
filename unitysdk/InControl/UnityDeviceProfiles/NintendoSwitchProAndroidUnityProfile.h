#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NINTENDOSWITCHPROANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15CA2B50)
#define INCONTROL_UNITYDEVICEPROFILES_NINTENDOSWITCHPROANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15CA4150)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NintendoSwitchProAndroidUnityProfile_TypeDefinitionIndex = 31563;

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
