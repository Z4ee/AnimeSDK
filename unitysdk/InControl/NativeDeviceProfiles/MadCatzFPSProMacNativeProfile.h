#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZFPSPROMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BAA350)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZFPSPROMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BAA3E0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzFPSProMacNativeProfile_TypeDefinitionIndex = 31753;

	class MadCatzFPSProMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZFPSPROMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZFPSPROMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
