#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_TSZPELICANCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B555CC0)
#define INCONTROL_NATIVEDEVICEPROFILES_TSZPELICANCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B555D40)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int TSZPelicanControllerMacNativeProfile_TypeDefinitionIndex = 39939;

	class TSZPelicanControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_TSZPELICANCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_TSZPELICANCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
