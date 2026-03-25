#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/XboxOneDriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MICROSOFTXBOXONECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BAE3B0)
#define INCONTROL_NATIVEDEVICEPROFILES_MICROSOFTXBOXONECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BAFA60)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MicrosoftXboxOneControllerMacNativeProfile_TypeDefinitionIndex = 31781;

	class MicrosoftXboxOneControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::XboxOneDriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MICROSOFTXBOXONECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MICROSOFTXBOXONECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
