#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZSAITEKAV8R02MACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x132B8770)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZSAITEKAV8R02MACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x132B87F0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzSaitekAV8R02MacNativeProfile_TypeDefinitionIndex = 39033;

	class MadCatzSaitekAV8R02MacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZSAITEKAV8R02MACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZSAITEKAV8R02MACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
