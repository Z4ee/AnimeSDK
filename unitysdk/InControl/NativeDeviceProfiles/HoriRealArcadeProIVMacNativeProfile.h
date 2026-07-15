#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROIVMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17363680)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROIVMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17363700)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriRealArcadeProIVMacNativeProfile_TypeDefinitionIndex = 38986;

	class HoriRealArcadeProIVMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROIVMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROIVMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
