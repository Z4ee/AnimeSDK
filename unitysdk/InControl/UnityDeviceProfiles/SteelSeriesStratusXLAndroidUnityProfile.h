#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESSTRATUSXLANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC12F9A0)
#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESSTRATUSXLANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC130B70)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int SteelSeriesStratusXLAndroidUnityProfile_TypeDefinitionIndex = 39692;

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
