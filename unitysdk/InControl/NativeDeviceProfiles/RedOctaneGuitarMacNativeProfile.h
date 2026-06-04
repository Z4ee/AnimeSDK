#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_REDOCTANEGUITARMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18002AA0)
#define INCONTROL_NATIVEDEVICEPROFILES_REDOCTANEGUITARMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18002B20)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int RedOctaneGuitarMacNativeProfile_TypeDefinitionIndex = 38264;

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
