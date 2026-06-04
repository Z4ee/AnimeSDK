#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XIAMOIWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18117E50)
#define INCONTROL_UNITYDEVICEPROFILES_XIAMOIWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x181190F0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XiamoiWindowsUnityProfile_TypeDefinitionIndex = 38140;

	class XiamoiWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XIAMOIWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XIAMOIWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
