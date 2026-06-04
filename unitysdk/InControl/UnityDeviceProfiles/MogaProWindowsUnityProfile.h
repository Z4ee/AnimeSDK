#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180B1FE0)
#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180B32B0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MogaProWindowsUnityProfile_TypeDefinitionIndex = 38116;

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
