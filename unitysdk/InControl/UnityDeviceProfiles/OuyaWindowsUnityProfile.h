#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_OUYAWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xB50DE50)
#define INCONTROL_UNITYDEVICEPROFILES_OUYAWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xB50EFB0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int OuyaWindowsUnityProfile_TypeDefinitionIndex = 38931;

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
