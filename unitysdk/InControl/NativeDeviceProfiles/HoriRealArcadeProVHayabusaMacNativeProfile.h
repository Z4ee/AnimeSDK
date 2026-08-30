#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVHAYABUSAMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18EAD300)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVHAYABUSAMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EAD380)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriRealArcadeProVHayabusaMacNativeProfile_TypeDefinitionIndex = 39846;

	class HoriRealArcadeProVHayabusaMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVHAYABUSAMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROVHAYABUSAMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
