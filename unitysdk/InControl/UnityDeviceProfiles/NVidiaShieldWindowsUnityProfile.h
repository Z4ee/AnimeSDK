#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELDWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x172988B0)
#define INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELDWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1729A0B0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NVidiaShieldWindowsUnityProfile_TypeDefinitionIndex = 37387;

	class NVidiaShieldWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELDWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELDWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
