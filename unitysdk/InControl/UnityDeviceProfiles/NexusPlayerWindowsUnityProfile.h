#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NEXUSPLAYERWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180C03C0)
#define INCONTROL_UNITYDEVICEPROFILES_NEXUSPLAYERWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180C15D0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NexusPlayerWindowsUnityProfile_TypeDefinitionIndex = 38121;

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
