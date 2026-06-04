#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_BROOKPS2CONVERTERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17FCA840)
#define INCONTROL_NATIVEDEVICEPROFILES_BROOKPS2CONVERTERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FCA8C0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int BrookPS2ConverterMacNativeProfile_TypeDefinitionIndex = 38148;

	class BrookPS2ConverterMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_BROOKPS2CONVERTERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_BROOKPS2CONVERTERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
