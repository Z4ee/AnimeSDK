#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_RAZERONZATECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18000FB0)
#define INCONTROL_NATIVEDEVICEPROFILES_RAZERONZATECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18001060)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int RazerOnzaTEControllerMacNativeProfile_TypeDefinitionIndex = 38258;

	class RazerOnzaTEControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_RAZERONZATECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_RAZERONZATECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
