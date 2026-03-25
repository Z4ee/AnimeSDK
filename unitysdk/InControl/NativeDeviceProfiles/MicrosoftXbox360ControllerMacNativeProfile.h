#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MICROSOFTXBOX360CONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BADD10)
#define INCONTROL_NATIVEDEVICEPROFILES_MICROSOFTXBOX360CONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BADF70)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MicrosoftXbox360ControllerMacNativeProfile_TypeDefinitionIndex = 31779;

	class MicrosoftXbox360ControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MICROSOFTXBOX360CONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MICROSOFTXBOX360CONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
