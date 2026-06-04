#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XINPUTWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1801AE20)
#define INCONTROL_NATIVEDEVICEPROFILES_XINPUTWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1801C050)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XInputWindowsNativeProfile_TypeDefinitionIndex = 38359;

	class XInputWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XINPUTWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XINPUTWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
