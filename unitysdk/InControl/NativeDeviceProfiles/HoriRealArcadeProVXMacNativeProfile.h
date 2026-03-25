#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVXMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15B9C0D0)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVXMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B9C160)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriRealArcadeProVXMacNativeProfile_TypeDefinitionIndex = 31729;

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
