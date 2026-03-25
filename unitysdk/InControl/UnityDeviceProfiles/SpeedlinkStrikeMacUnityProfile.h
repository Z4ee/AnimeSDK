#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_SPEEDLINKSTRIKEMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15CDB8D0)
#define INCONTROL_UNITYDEVICEPROFILES_SPEEDLINKSTRIKEMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15CDCF00)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int SpeedlinkStrikeMacUnityProfile_TypeDefinitionIndex = 31612;

	class SpeedlinkStrikeMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_SPEEDLINKSTRIKEMACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_SPEEDLINKSTRIKEMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
