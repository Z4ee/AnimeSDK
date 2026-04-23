#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4WINDOWSCHROMEUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x172C47F0)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4WINDOWSCHROMEUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x172C6020)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4WindowsChromeUnityProfile_TypeDefinitionIndex = 37360;

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
