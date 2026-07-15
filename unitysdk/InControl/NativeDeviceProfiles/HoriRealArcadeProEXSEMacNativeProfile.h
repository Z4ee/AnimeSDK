#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROEXSEMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17363560)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROEXSEMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x173635E0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriRealArcadeProEXSEMacNativeProfile_TypeDefinitionIndex = 38984;

	class HoriRealArcadeProEXSEMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROEXSEMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROEXSEMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
