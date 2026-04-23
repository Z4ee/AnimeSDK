#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MVCTESTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171A7850)
#define INCONTROL_NATIVEDEVICEPROFILES_MVCTESTICKMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171A7920)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MVCTEStickMacNativeProfile_TypeDefinitionIndex = 37467;

	class MVCTEStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MVCTESTICKMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MVCTESTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
