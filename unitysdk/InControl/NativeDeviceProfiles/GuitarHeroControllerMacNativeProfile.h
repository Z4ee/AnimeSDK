#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_GUITARHEROCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17FDB8B0)
#define INCONTROL_NATIVEDEVICEPROFILES_GUITARHEROCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FDB930)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int GuitarHeroControllerMacNativeProfile_TypeDefinitionIndex = 38154;

	class GuitarHeroControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_GUITARHEROCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_GUITARHEROCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
