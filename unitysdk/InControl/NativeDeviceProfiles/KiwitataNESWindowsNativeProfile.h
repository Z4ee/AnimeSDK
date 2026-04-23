#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_KIWITATANESWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17199F50)
#define INCONTROL_NATIVEDEVICEPROFILES_KIWITATANESWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1719ACB0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int KiwitataNESWindowsNativeProfile_TypeDefinitionIndex = 37610;

	class KiwitataNESWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_KIWITATANESWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_KIWITATANESWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
