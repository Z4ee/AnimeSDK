#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACCHROMEUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180D9D30)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACCHROMEUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180DB140)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4MacChromeUnityProfile_TypeDefinitionIndex = 38083;

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
