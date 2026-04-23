#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZSOULCALIBERFIGHTSTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171AAF70)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZSOULCALIBERFIGHTSTICKMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171AB000)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzSoulCaliberFightStickMacNativeProfile_TypeDefinitionIndex = 37494;

	class MadCatzSoulCaliberFightStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZSOULCALIBERFIGHTSTICKMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZSOULCALIBERFIGHTSTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
