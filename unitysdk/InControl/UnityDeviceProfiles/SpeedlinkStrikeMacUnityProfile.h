#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_SPEEDLINKSTRIKEMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BB08B80)
#define INCONTROL_UNITYDEVICEPROFILES_SPEEDLINKSTRIKEMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB09DD0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int SpeedlinkStrikeMacUnityProfile_TypeDefinitionIndex = 41028;

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
