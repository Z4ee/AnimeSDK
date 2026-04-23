#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSNES30WINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17191E80)
#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSNES30WINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171929E0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoSNES30WindowsNativeProfile_TypeDefinitionIndex = 37606;

	class EightBitdoSNES30WindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSNES30WINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSNES30WINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
