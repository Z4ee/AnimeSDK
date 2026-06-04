#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XINPUTWINDOWSCHROMEUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180FCA20)
#define INCONTROL_UNITYDEVICEPROFILES_XINPUTWINDOWSCHROMEUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180FDE00)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XInputWindowsChromeUnityProfile_TypeDefinitionIndex = 38094;

	class XInputWindowsChromeUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XINPUTWINDOWSCHROMEUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XINPUTWINDOWSCHROMEUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
