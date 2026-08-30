#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MAXFIREBLAZE5WINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B5E4E40)
#define INCONTROL_UNITYDEVICEPROFILES_MAXFIREBLAZE5WINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5E60C0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MaxFireBlaze5WindowsUnityProfile_TypeDefinitionIndex = 39782;

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
