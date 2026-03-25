#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZMLGFIGHTSTICKTEMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BAA930)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZMLGFIGHTSTICKTEMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BAACC0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzMLGFightStickTEMacNativeProfile_TypeDefinitionIndex = 31762;

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
