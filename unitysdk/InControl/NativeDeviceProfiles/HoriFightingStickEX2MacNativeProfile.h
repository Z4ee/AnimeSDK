#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGSTICKEX2MACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B518D30)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGSTICKEX2MACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B518E30)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriFightingStickEX2MacNativeProfile_TypeDefinitionIndex = 39835;

	class HoriFightingStickEX2MacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGSTICKEX2MACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGSTICKEX2MACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
