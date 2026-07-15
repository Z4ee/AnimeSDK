#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MAXFIREBLAZE5WINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xB4EF090)
#define INCONTROL_UNITYDEVICEPROFILES_MAXFIREBLAZE5WINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4F0310)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MaxFireBlaze5WindowsUnityProfile_TypeDefinitionIndex = 38923;

	class MaxFireBlaze5WindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MAXFIREBLAZE5WINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MAXFIREBLAZE5WINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
