#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_TSZPELICANCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BE3510)
#define INCONTROL_NATIVEDEVICEPROFILES_TSZPELICANCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BE35A0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int TSZPelicanControllerMacNativeProfile_TypeDefinitionIndex = 31820;

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
