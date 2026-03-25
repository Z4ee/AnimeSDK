#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15C2B590)
#define INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C2C180)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int BuffaloClassicWindowsUnityProfile_TypeDefinitionIndex = 31646;

	class BuffaloClassicWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
