#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_REDOCTANEGUITARMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171C63B0)
#define INCONTROL_NATIVEDEVICEPROFILES_REDOCTANEGUITARMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171C6440)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int RedOctaneGuitarMacNativeProfile_TypeDefinitionIndex = 37532;

	class RedOctaneGuitarMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_REDOCTANEGUITARMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_REDOCTANEGUITARMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
