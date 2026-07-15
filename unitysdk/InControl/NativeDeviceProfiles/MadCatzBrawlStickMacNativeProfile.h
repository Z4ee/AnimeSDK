#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZBRAWLSTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1736F180)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZBRAWLSTICKMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1736F200)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzBrawlStickMacNativeProfile_TypeDefinitionIndex = 39010;

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
