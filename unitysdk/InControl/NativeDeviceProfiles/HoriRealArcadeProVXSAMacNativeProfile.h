#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVXSAMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17FDCB30)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVXSAMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FDCBF0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriRealArcadeProVXSAMacNativeProfile_TypeDefinitionIndex = 38182;

	class HoriRealArcadeProVXSAMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVXSAMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVXSAMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
