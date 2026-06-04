#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18083490)
#define INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18084750)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GoogleStadiaWindowsUnityProfile_TypeDefinitionIndex = 38105;

	class GoogleStadiaWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
