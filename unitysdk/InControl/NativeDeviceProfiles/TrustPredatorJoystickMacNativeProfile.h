#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_TRUSTPREDATORJOYSTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171E19F0)
#define INCONTROL_NATIVEDEVICEPROFILES_TRUSTPREDATORJOYSTICKMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171E1A80)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int TrustPredatorJoystickMacNativeProfile_TypeDefinitionIndex = 37547;

	class TrustPredatorJoystickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_TRUSTPREDATORJOYSTICKMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_TRUSTPREDATORJOYSTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
