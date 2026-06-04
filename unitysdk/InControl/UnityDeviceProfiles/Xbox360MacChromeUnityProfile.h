#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOX360MACCHROMEUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18103CC0)
#define INCONTROL_UNITYDEVICEPROFILES_XBOX360MACCHROMEUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x181050A0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int Xbox360MacChromeUnityProfile_TypeDefinitionIndex = 38085;

	class Xbox360MacChromeUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360MACCHROMEUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360MACCHROMEUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
