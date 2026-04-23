#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESSTRATUSXLWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x172E30A0)
#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESSTRATUSXLWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x172E4880)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int SteelSeriesStratusXLWindowsUnityProfile_TypeDefinitionIndex = 37400;

	class SteelSeriesStratusXLWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_STEELSERIESSTRATUSXLWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_STEELSERIESSTRATUSXLWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
