#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_RAZERONZATECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BC6AD0)
#define INCONTROL_NATIVEDEVICEPROFILES_RAZERONZATECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BC6BA0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int RazerOnzaTEControllerMacNativeProfile_TypeDefinitionIndex = 31806;

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
