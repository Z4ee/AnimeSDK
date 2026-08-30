#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOX360MACCHROMEUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC13A3A0)
#define INCONTROL_UNITYDEVICEPROFILES_XBOX360MACCHROMEUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC13B720)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int Xbox360MacChromeUnityProfile_TypeDefinitionIndex = 39752;

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
