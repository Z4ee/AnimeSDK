#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NINTENDOSWITCHPROMACCHROMEUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B5FC680)
#define INCONTROL_UNITYDEVICEPROFILES_NINTENDOSWITCHPROMACCHROMEUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5FDA00)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NintendoSwitchProMacChromeUnityProfile_TypeDefinitionIndex = 39749;

	class NintendoSwitchProMacChromeUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NINTENDOSWITCHPROMACCHROMEUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NINTENDOSWITCHPROMACCHROMEUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
