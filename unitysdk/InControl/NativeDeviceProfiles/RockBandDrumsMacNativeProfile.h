#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_ROCKBANDDRUMSMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BC8B50)
#define INCONTROL_NATIVEDEVICEPROFILES_ROCKBANDDRUMSMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BC8BE0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int RockBandDrumsMacNativeProfile_TypeDefinitionIndex = 31813;

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
