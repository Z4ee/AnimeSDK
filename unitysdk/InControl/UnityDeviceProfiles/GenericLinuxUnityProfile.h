#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GENERICLINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B5BA770)
#define INCONTROL_UNITYDEVICEPROFILES_GENERICLINUXUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5BBD30)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GenericLinuxUnityProfile_TypeDefinitionIndex = 39699;

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
