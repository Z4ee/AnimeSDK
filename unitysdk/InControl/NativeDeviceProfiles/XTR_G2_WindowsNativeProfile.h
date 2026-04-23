#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XTR_G2_WINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171E38D0)
#define INCONTROL_NATIVEDEVICEPROFILES_XTR_G2_WINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171E3A20)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XTR_G2_WindowsNativeProfile_TypeDefinitionIndex = 37629;

	class XTR_G2_WindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XTR_G2_WINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XTR_G2_WINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
