#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_ROCKBANDDRUMSMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18002C10)
#define INCONTROL_NATIVEDEVICEPROFILES_ROCKBANDDRUMSMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18002C90)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int RockBandDrumsMacNativeProfile_TypeDefinitionIndex = 38265;

	class RockBandDrumsMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_ROCKBANDDRUMSMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_ROCKBANDDRUMSMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
