#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NEXUSPLAYERANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180BD5B0)
#define INCONTROL_UNITYDEVICEPROFILES_NEXUSPLAYERANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180BE880)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NexusPlayerAndroidUnityProfile_TypeDefinitionIndex = 38013;

	class NexusPlayerAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NEXUSPLAYERANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NEXUSPLAYERANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
