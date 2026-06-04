#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_OUYALINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180C9020)
#define INCONTROL_UNITYDEVICEPROFILES_OUYALINUXUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180CA1F0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int OuyaLinuxUnityProfile_TypeDefinitionIndex = 38038;

	class OuyaLinuxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_OUYALINUXUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_OUYALINUXUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
