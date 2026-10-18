#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_OUYAWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BAE2110)
#define INCONTROL_UNITYDEVICEPROFILES_OUYAWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAE3270)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int OuyaWindowsUnityProfile_TypeDefinitionIndex = 41087;

	class OuyaWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_OUYAWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_OUYAWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
