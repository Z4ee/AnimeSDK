#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_OUYALINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC100BB0)
#define INCONTROL_UNITYDEVICEPROFILES_OUYALINUXUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC101D10)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int OuyaLinuxUnityProfile_TypeDefinitionIndex = 39705;

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
