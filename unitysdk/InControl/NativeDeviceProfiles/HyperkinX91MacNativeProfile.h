#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HYPERKINX91MACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15B9C2F0)
#define INCONTROL_NATIVEDEVICEPROFILES_HYPERKINX91MACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B9C380)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HyperkinX91MacNativeProfile_TypeDefinitionIndex = 31732;

	class HyperkinX91MacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HYPERKINX91MACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HYPERKINX91MACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
