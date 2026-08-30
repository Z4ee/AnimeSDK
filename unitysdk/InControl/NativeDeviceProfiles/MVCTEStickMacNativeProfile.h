#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MVCTESTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B524CA0)
#define INCONTROL_NATIVEDEVICEPROFILES_MVCTESTICKMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B524D60)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MVCTEStickMacNativeProfile_TypeDefinitionIndex = 39866;

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
