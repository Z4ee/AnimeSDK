#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xB4F63F0)
#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4F7650)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MogaProWindowsUnityProfile_TypeDefinitionIndex = 38924;

	class MogaProWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAPROWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAPROWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
