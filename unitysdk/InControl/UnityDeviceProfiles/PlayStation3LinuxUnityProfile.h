#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3LINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180D0560)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3LINUXUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180D1880)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation3LinuxUnityProfile_TypeDefinitionIndex = 38040;

	class PlayStation3LinuxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3LINUXUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3LINUXUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
