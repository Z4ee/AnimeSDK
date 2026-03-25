#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIEDGEFIGHTINGSTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15B9B4E0)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIEDGEFIGHTINGSTICKMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B9B570)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriEdgeFightingStickMacNativeProfile_TypeDefinitionIndex = 31712;

	class HoriEdgeFightingStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIEDGEFIGHTINGSTICKMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIEDGEFIGHTINGSTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
