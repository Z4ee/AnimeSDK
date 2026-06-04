#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180F41E0)
#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180F54D0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int SteelSeriesFreeAndroidUnityProfile_TypeDefinitionIndex = 38024;

	class SteelSeriesFreeAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
