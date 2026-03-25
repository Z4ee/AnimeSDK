#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_BETAOPCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15B86590)
#define INCONTROL_NATIVEDEVICEPROFILES_BETAOPCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B86620)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int BETAOPControllerMacNativeProfile_TypeDefinitionIndex = 31692;

	class BETAOPControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_BETAOPCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_BETAOPCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
