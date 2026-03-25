#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/XboxOneDriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PDPXBOXONECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BB7F00)
#define INCONTROL_NATIVEDEVICEPROFILES_PDPXBOXONECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB8490)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PDPXboxOneControllerMacNativeProfile_TypeDefinitionIndex = 31794;

	class PDPXboxOneControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::XboxOneDriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PDPXBOXONECONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PDPXBOXONECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
