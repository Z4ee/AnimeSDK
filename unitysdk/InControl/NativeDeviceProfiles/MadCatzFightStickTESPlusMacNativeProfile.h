#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZFIGHTSTICKTESPLUSMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1736F670)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZFIGHTSTICKTESPLUSMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1736F6F0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzFightStickTESPlusMacNativeProfile_TypeDefinitionIndex = 39017;

	class MadCatzFightStickTESPlusMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZFIGHTSTICKTESPLUSMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZFIGHTSTICKTESPLUSMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
