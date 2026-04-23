#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZBRAWLSTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171A7A70)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZBRAWLSTICKMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171A7B00)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzBrawlStickMacNativeProfile_TypeDefinitionIndex = 37470;

	class MadCatzBrawlStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZBRAWLSTICKMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZBRAWLSTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
