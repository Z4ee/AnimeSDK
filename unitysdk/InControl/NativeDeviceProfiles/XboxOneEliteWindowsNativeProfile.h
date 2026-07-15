#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEELITEWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x132EC600)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEELITEWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x132ED6F0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxOneEliteWindowsNativeProfile_TypeDefinitionIndex = 39173;

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
