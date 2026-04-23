#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZSF4FIGHTSTICKTEMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171AA970)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZSF4FIGHTSTICKTEMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171AAA00)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzSF4FightStickTEMacNativeProfile_TypeDefinitionIndex = 37490;

	class MadCatzSF4FightStickTEMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZSF4FIGHTSTICKTEMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZSF4FIGHTSTICKTEMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
