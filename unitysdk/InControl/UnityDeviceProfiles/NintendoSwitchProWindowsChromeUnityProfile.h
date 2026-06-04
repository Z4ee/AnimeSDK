#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NINTENDOSWITCHPROWINDOWSCHROMEUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180C3F50)
#define INCONTROL_UNITYDEVICEPROFILES_NINTENDOSWITCHPROWINDOWSCHROMEUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180C5360)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NintendoSwitchProWindowsChromeUnityProfile_TypeDefinitionIndex = 38091;

	class NintendoSwitchProWindowsChromeUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NINTENDOSWITCHPROWINDOWSCHROMEUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NINTENDOSWITCHPROWINDOWSCHROMEUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
