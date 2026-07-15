#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERTXGIPMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x132E7100)
#define INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERTXGIPMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x132E7180)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int ThrustmasterTXGIPMacNativeProfile_TypeDefinitionIndex = 39086;

	class ThrustmasterTXGIPMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERTXGIPMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERTXGIPMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
