#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_POWERASPECTRAILLUMINATEDCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180006B0)
#define INCONTROL_NATIVEDEVICEPROFILES_POWERASPECTRAILLUMINATEDCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18000730)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PowerASpectraIlluminatedControllerMacNativeProfile_TypeDefinitionIndex = 38252;

	class PowerASpectraIlluminatedControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_POWERASPECTRAILLUMINATEDCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_POWERASPECTRAILLUMINATEDCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
