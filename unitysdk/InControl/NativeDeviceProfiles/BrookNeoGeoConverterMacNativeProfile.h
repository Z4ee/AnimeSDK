#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_BROOKNEOGEOCONVERTERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18E9B850)
#define INCONTROL_NATIVEDEVICEPROFILES_BROOKNEOGEOCONVERTERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E9B8D0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int BrookNeoGeoConverterMacNativeProfile_TypeDefinitionIndex = 39814;

	class BrookNeoGeoConverterMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_BROOKNEOGEOCONVERTERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_BROOKNEOGEOCONVERTERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
