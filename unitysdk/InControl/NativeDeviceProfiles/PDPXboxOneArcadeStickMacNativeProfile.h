#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/XboxOneDriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PDPXBOXONEARCADESTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BB7D80)
#define INCONTROL_NATIVEDEVICEPROFILES_PDPXBOXONEARCADESTICKMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB7E10)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PDPXboxOneArcadeStickMacNativeProfile_TypeDefinitionIndex = 31793;

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
