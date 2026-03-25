#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZFIGHTPADCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BAA3F0)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZFIGHTPADCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BAA4C0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzFightPadControllerMacNativeProfile_TypeDefinitionIndex = 31754;

	class MadCatzFightPadControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZFIGHTPADCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZFIGHTPADCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
