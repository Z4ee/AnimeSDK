#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOX360PROEXCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1801CB30)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOX360PROEXCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1801CBB0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int Xbox360ProEXControllerMacNativeProfile_TypeDefinitionIndex = 38281;

	class Xbox360ProEXControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOX360PROEXCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOX360PROEXCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
