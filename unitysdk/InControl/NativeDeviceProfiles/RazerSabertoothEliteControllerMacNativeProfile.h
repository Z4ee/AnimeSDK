#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_RAZERSABERTOOTHELITECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B53D2A0)
#define INCONTROL_NATIVEDEVICEPROFILES_RAZERSABERTOOTHELITECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B53D350)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int RazerSabertoothEliteControllerMacNativeProfile_TypeDefinitionIndex = 39926;

	class RazerSabertoothEliteControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_RAZERSABERTOOTHELITECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_RAZERSABERTOOTHELITECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
