#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_RAZERATROXARCADESTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BC6750)
#define INCONTROL_NATIVEDEVICEPROFILES_RAZERATROXARCADESTICKMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BC6820)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int RazerAtroxArcadeStickMacNativeProfile_TypeDefinitionIndex = 31804;

	class RazerAtroxArcadeStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_RAZERATROXARCADESTICKMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_RAZERATROXARCADESTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
