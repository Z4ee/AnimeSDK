#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_RAZERWOLVERINEULTIMATECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171C6070)
#define INCONTROL_NATIVEDEVICEPROFILES_RAZERWOLVERINEULTIMATECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171C6100)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int RazerWolverineUltimateControllerMacNativeProfile_TypeDefinitionIndex = 37530;

	class RazerWolverineUltimateControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_RAZERWOLVERINEULTIMATECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_RAZERWOLVERINEULTIMATECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
