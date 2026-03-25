#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_SPEEDLINKSTRIKEWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15CDCFF0)
#define INCONTROL_UNITYDEVICEPROFILES_SPEEDLINKSTRIKEWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15CDE600)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int SpeedlinkStrikeWindowsUnityProfile_TypeDefinitionIndex = 31678;

	class SpeedlinkStrikeWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_SPEEDLINKSTRIKEWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_SPEEDLINKSTRIKEWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
