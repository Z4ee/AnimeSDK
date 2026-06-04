#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERGPXCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1801A830)
#define INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERGPXCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1801A8E0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int ThrustmasterGPXControllerMacNativeProfile_TypeDefinitionIndex = 38276;

	class ThrustmasterGPXControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERGPXCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERGPXCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
