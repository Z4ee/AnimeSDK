#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZMLGFIGHTSTICKTEMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17FE8F30)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZMLGFIGHTSTICKTEMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FE9250)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzMLGFightStickTEMacNativeProfile_TypeDefinitionIndex = 38214;

	class MadCatzMLGFightStickTEMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZMLGFIGHTSTICKTEMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZMLGFIGHTSTICKTEMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
