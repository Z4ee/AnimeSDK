#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_IONDRUMROCKERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17199E10)
#define INCONTROL_NATIVEDEVICEPROFILES_IONDRUMROCKERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17199EA0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int IonDrumRockerMacNativeProfile_TypeDefinitionIndex = 37454;

	class IonDrumRockerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_IONDRUMROCKERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_IONDRUMROCKERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
