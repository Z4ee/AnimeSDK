#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/XboxOneDriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PDPXBOXONEARCADESTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17FF4680)
#define INCONTROL_NATIVEDEVICEPROFILES_PDPXBOXONEARCADESTICKMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FF4700)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PDPXboxOneArcadeStickMacNativeProfile_TypeDefinitionIndex = 38245;

	class PDPXboxOneArcadeStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::XboxOneDriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PDPXBOXONEARCADESTICKMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PDPXBOXONEARCADESTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
