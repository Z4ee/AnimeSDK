#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIXBOX360GEMPADEXMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15B9C250)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIXBOX360GEMPADEXMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B9C2E0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriXbox360GemPadExMacNativeProfile_TypeDefinitionIndex = 31731;

	class HoriXbox360GemPadExMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIXBOX360GEMPADEXMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIXBOX360GEMPADEXMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
