#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIRAPNFIGHTINGSTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17FDC5E0)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIRAPNFIGHTINGSTICKMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FDC660)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriRAPNFightingStickMacNativeProfile_TypeDefinitionIndex = 38173;

	class HoriRAPNFightingStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIRAPNFIGHTINGSTICKMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIRAPNFIGHTINGSTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
