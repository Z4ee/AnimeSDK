#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACCHROMEUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15CBF670)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACCHROMEUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15CC0EA0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4MacChromeUnityProfile_TypeDefinitionIndex = 31631;

	class PlayStation4MacChromeUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACCHROMEUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACCHROMEUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
