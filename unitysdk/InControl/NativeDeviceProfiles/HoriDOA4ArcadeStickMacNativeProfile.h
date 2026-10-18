#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIDOA4ARCADESTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA17570)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIDOA4ARCADESTICKMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA175F0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriDOA4ArcadeStickMacNativeProfile_TypeDefinitionIndex = 41126;

	class HoriDOA4ArcadeStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIDOA4ARCADESTICKMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIDOA4ARCADESTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
