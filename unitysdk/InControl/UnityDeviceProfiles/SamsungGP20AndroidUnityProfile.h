#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_SAMSUNGGP20ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180F0950)
#define INCONTROL_UNITYDEVICEPROFILES_SAMSUNGGP20ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180F1990)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int SamsungGP20AndroidUnityProfile_TypeDefinitionIndex = 38023;

	class SamsungGP20AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_SAMSUNGGP20ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_SAMSUNGGP20ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
