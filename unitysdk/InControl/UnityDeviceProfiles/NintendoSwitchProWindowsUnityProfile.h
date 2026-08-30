#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NINTENDOSWITCHPROWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC0FD180)
#define INCONTROL_UNITYDEVICEPROFILES_NINTENDOSWITCHPROWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC0FE230)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NintendoSwitchProWindowsUnityProfile_TypeDefinitionIndex = 39789;

	class NintendoSwitchProWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NINTENDOSWITCHPROWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NINTENDOSWITCHPROWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
