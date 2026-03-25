#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/XboxOneDriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_FUSIONXBOXONECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15B95190)
#define INCONTROL_NATIVEDEVICEPROFILES_FUSIONXBOXONECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B95260)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int FusionXboxOneControllerMacNativeProfile_TypeDefinitionIndex = 31700;

	class FusionXboxOneControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::XboxOneDriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_FUSIONXBOXONECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_FUSIONXBOXONECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
