#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZSSF4CHUNLIFIGHTSTICKTEMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BAD110)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZSSF4CHUNLIFIGHTSTICKTEMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BAD1A0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzSSF4ChunLiFightStickTEMacNativeProfile_TypeDefinitionIndex = 31771;

	class MadCatzSSF4ChunLiFightStickTEMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZSSF4CHUNLIFIGHTSTICKTEMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZSSF4CHUNLIFIGHTSTICKTEMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
