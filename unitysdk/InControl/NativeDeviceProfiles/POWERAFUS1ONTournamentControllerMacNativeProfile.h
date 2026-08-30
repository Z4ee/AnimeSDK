#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_POWERAFUS1ONTOURNAMENTCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B531240)
#define INCONTROL_NATIVEDEVICEPROFILES_POWERAFUS1ONTOURNAMENTCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5312C0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int POWERAFUS1ONTournamentControllerMacNativeProfile_TypeDefinitionIndex = 39914;

	class POWERAFUS1ONTournamentControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_POWERAFUS1ONTOURNAMENTCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_POWERAFUS1ONTOURNAMENTCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
