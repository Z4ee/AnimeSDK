#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/XboxOneDriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MICROSOFTXBOXONEELITECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171AD620)
#define INCONTROL_NATIVEDEVICEPROFILES_MICROSOFTXBOXONEELITECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171AD6B0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MicrosoftXboxOneEliteControllerMacNativeProfile_TypeDefinitionIndex = 37502;

	class MicrosoftXboxOneEliteControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::XboxOneDriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MICROSOFTXBOXONEELITECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MICROSOFTXBOXONEELITECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
