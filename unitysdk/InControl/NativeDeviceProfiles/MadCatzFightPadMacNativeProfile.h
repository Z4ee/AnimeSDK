#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZFIGHTPADMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BAA4D0)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZFIGHTPADMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BAA560)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzFightPadMacNativeProfile_TypeDefinitionIndex = 31755;

	class MadCatzFightPadMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZFIGHTPADMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZFIGHTPADMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
