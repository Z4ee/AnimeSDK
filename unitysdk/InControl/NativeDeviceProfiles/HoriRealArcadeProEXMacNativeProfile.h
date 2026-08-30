#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROEXMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18EAD030)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROEXMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EAD0B0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriRealArcadeProEXMacNativeProfile_TypeDefinitionIndex = 39841;

	class HoriRealArcadeProEXMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROEXMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIREALARCADEPROEXMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
