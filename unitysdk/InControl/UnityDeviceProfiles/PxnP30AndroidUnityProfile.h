#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PXNP30ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B621E80)
#define INCONTROL_UNITYDEVICEPROFILES_PXNP30ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6230F0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PxnP30AndroidUnityProfile_TypeDefinitionIndex = 39687;

	class PxnP30AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PXNP30ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PXNP30ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
