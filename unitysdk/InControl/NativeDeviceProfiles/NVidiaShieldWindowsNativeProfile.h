#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_NVIDIASHIELDWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x132BAC30)
#define INCONTROL_NATIVEDEVICEPROFILES_NVIDIASHIELDWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x132BBCD0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int NVidiaShieldWindowsNativeProfile_TypeDefinitionIndex = 39157;

	class NVidiaShieldWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_NVIDIASHIELDWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_NVIDIASHIELDWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
