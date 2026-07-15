#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EXECUTIONERXWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xB4B4110)
#define INCONTROL_UNITYDEVICEPROFILES_EXECUTIONERXWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4B53A0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int ExecutionerXWindowsUnityProfile_TypeDefinitionIndex = 38910;

	class ExecutionerXWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EXECUTIONERXWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EXECUTIONERXWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
