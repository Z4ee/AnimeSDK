#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOX360MORTALKOMBATFIGHTSTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171E3B10)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOX360MORTALKOMBATFIGHTSTICKMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171E3BA0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int Xbox360MortalKombatFightStickMacNativeProfile_TypeDefinitionIndex = 37548;

	class Xbox360MortalKombatFightStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOX360MORTALKOMBATFIGHTSTICKMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOX360MORTALKOMBATFIGHTSTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
