#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4WINDOWSCHROMEUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180E0190)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4WINDOWSCHROMEUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180E15A0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4WindowsChromeUnityProfile_TypeDefinitionIndex = 38092;

	class PlayStation4WindowsChromeUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4WINDOWSCHROMEUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4WINDOWSCHROMEUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
