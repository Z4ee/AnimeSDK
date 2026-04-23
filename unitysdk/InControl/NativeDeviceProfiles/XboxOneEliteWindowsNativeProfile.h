#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEELITEWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171E7F20)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEELITEWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171E93D0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxOneEliteWindowsNativeProfile_TypeDefinitionIndex = 37633;

	class XboxOneEliteWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONEELITEWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONEELITEWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
