#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NEXUSPLAYERWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BAF8DC0)
#define INCONTROL_UNITYDEVICEPROFILES_NEXUSPLAYERWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAF9F60)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NexusPlayerWindowsUnityProfile_TypeDefinitionIndex = 41085;

	class NexusPlayerWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NEXUSPLAYERWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NEXUSPLAYERWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
