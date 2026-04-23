#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_DRAGONRISEARCADESTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17185AD0)
#define INCONTROL_NATIVEDEVICEPROFILES_DRAGONRISEARCADESTICKMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17185B60)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int DragonRiseArcadeStickMacNativeProfile_TypeDefinitionIndex = 37417;

	class DragonRiseArcadeStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_DRAGONRISEARCADESTICKMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_DRAGONRISEARCADESTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
