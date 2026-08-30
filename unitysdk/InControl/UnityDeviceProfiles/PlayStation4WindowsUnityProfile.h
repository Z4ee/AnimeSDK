#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4WINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC119EA0)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4WINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC11B270)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4WindowsUnityProfile_TypeDefinitionIndex = 39795;

	class PlayStation4WindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4WINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4WINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
