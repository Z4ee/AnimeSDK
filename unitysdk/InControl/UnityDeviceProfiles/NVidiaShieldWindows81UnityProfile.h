#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELDWINDOWS81UNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180B96F0)
#define INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELDWINDOWS81UNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180BAB20)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NVidiaShieldWindows81UnityProfile_TypeDefinitionIndex = 38118;

	class NVidiaShieldWindows81UnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELDWINDOWS81UNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELDWINDOWS81UNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
