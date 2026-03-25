#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/XboxOneDriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PROEXXBOXONECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BC6450)
#define INCONTROL_NATIVEDEVICEPROFILES_PROEXXBOXONECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BC64E0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int ProEXXboxOneControllerMacNativeProfile_TypeDefinitionIndex = 31802;

	class ProEXXboxOneControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::XboxOneDriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PROEXXBOXONECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PROEXXBOXONECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
