#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVXMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18EAD460)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVXMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EAD4E0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriRealArcadeProVXMacNativeProfile_TypeDefinitionIndex = 39848;

	class HoriRealArcadeProVXMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVXMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVXMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
