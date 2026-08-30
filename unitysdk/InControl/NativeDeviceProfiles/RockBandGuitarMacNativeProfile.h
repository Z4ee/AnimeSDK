#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_ROCKBANDGUITARMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1494EAB0)
#define INCONTROL_NATIVEDEVICEPROFILES_ROCKBANDGUITARMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1494EB30)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int RockBandGuitarMacNativeProfile_TypeDefinitionIndex = 39933;

	class RockBandGuitarMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_ROCKBANDGUITARMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_ROCKBANDGUITARMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
