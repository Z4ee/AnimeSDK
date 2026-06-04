#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIDOA4ARCADESTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17FDBE30)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIDOA4ARCADESTICKMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FDBEB0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriDOA4ArcadeStickMacNativeProfile_TypeDefinitionIndex = 38162;

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
