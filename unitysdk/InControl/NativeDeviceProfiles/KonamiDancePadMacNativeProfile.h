#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_KONAMIDANCEPADMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B51A580)
#define INCONTROL_NATIVEDEVICEPROFILES_KONAMIDANCEPADMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B51A600)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int KonamiDancePadMacNativeProfile_TypeDefinitionIndex = 39855;

	class KonamiDancePadMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_KONAMIDANCEPADMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_KONAMIDANCEPADMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
