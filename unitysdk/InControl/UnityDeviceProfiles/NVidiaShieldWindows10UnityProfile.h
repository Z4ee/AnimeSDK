#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELDWINDOWS10UNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC0F0330)
#define INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELDWINDOWS10UNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC0F1740)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NVidiaShieldWindows10UnityProfile_TypeDefinitionIndex = 39784;

	class NVidiaShieldWindows10UnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELDWINDOWS10UNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELDWINDOWS10UNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
