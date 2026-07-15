#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PDPAFTERGLOWPRISMATICCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x132C0AA0)
#define INCONTROL_NATIVEDEVICEPROFILES_PDPAFTERGLOWPRISMATICCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x132C0B90)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PDPAfterglowPrismaticControllerMacNativeProfile_TypeDefinitionIndex = 39045;

	class PDPAfterglowPrismaticControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PDPAFTERGLOWPRISMATICCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PDPAFTERGLOWPRISMATICCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
