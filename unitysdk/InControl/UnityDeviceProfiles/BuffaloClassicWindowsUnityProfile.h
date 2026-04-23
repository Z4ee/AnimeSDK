#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17228F70)
#define INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17229B60)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int BuffaloClassicWindowsUnityProfile_TypeDefinitionIndex = 37366;

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
