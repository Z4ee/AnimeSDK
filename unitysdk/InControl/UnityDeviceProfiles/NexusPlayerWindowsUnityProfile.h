#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NEXUSPLAYERWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1729EEE0)
#define INCONTROL_UNITYDEVICEPROFILES_NEXUSPLAYERWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x172A0440)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NexusPlayerWindowsUnityProfile_TypeDefinitionIndex = 37389;

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
