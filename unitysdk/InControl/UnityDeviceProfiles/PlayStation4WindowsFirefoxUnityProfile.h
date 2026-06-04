#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4WINDOWSFIREFOXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180E1690)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4WINDOWSFIREFOXUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180E2AA0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4WindowsFirefoxUnityProfile_TypeDefinitionIndex = 38093;

	class PlayStation4WindowsFirefoxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4WINDOWSFIREFOXUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4WINDOWSFIREFOXUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
