#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MAYFLASHMAGICNSMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171AB270)
#define INCONTROL_NATIVEDEVICEPROFILES_MAYFLASHMAGICNSMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171AB300)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MayflashMagicNSMacNativeProfile_TypeDefinitionIndex = 37496;

	class MayflashMagicNSMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MAYFLASHMAGICNSMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MAYFLASHMAGICNSMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
