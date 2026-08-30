#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B62CD00)
#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B62DF90)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int SteelSeriesFreeAndroidUnityProfile_TypeDefinitionIndex = 39691;

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
