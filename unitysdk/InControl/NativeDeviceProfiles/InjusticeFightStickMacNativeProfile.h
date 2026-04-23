#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_INJUSTICEFIGHTSTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17199D70)
#define INCONTROL_NATIVEDEVICEPROFILES_INJUSTICEFIGHTSTICKMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17199E00)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int InjusticeFightStickMacNativeProfile_TypeDefinitionIndex = 37453;

	class InjusticeFightStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_INJUSTICEFIGHTSTICKMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_INJUSTICEFIGHTSTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
