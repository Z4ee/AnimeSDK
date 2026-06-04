#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGEDGEARCADESTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17FDC1C0)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGEDGEARCADESTICKMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FDC240)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriFightingEdgeArcadeStickMacNativeProfile_TypeDefinitionIndex = 38167;

	class HoriFightingEdgeArcadeStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGEDGEARCADESTICKMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGEDGEARCADESTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
