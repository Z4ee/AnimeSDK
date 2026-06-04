#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_RAZERONZACONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18000E10)
#define INCONTROL_NATIVEDEVICEPROFILES_RAZERONZACONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18000EC0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int RazerOnzaControllerMacNativeProfile_TypeDefinitionIndex = 38257;

	class RazerOnzaControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_RAZERONZACONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_RAZERONZACONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
