#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESSTRATUSXLANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15CE4080)
#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESSTRATUSXLANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE55D0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int SteelSeriesStratusXLAndroidUnityProfile_TypeDefinitionIndex = 31573;

	class SteelSeriesStratusXLAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_STEELSERIESSTRATUSXLANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_STEELSERIESSTRATUSXLANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
