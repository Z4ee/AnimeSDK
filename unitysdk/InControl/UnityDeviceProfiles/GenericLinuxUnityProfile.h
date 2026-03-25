#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GENERICLINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15C55530)
#define INCONTROL_UNITYDEVICEPROFILES_GENERICLINUXUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C56F80)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GenericLinuxUnityProfile_TypeDefinitionIndex = 31580;

	class GenericLinuxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GENERICLINUXUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GENERICLINUXUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
