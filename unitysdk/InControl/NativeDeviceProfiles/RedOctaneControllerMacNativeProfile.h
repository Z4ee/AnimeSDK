#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_REDOCTANECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171C61F0)
#define INCONTROL_NATIVEDEVICEPROFILES_REDOCTANECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171C62C0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int RedOctaneControllerMacNativeProfile_TypeDefinitionIndex = 37531;

	class RedOctaneControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_REDOCTANECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_REDOCTANECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
