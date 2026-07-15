#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZSF4FIGHTSTICKSEMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x132B81B0)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZSF4FIGHTSTICKSEMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x132B8230)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzSF4FightStickSEMacNativeProfile_TypeDefinitionIndex = 39029;

	class MadCatzSF4FightStickSEMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZSF4FIGHTSTICKSEMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZSF4FIGHTSTICKSEMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
