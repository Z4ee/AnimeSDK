#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/XboxOneDriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PDPBATTLEFIELDXBOXONECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BB7300)
#define INCONTROL_NATIVEDEVICEPROFILES_PDPBATTLEFIELDXBOXONECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB7390)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PDPBattlefieldXBoxOneControllerMacNativeProfile_TypeDefinitionIndex = 31786;

	class PDPBattlefieldXBoxOneControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::XboxOneDriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PDPBATTLEFIELDXBOXONECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PDPBATTLEFIELDXBOXONECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
