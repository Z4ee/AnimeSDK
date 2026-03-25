#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATIONVITAPSMUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15CD01B0)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATIONVITAPSMUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD1520)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStationVitaPSMUnityProfile_TypeDefinitionIndex = 31627;

	class PlayStationVitaPSMUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATIONVITAPSMUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATIONVITAPSMUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
