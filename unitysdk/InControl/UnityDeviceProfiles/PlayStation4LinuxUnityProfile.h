#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4LINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15CBD1F0)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4LINUXUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15CBE8B0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4LinuxUnityProfile_TypeDefinitionIndex = 31589;

	class PlayStation4LinuxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4LINUXUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4LINUXUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
