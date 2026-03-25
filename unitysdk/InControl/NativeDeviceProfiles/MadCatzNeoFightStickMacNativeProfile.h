#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZNEOFIGHTSTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BAC810)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZNEOFIGHTSTICKMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BAC8A0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzNeoFightStickMacNativeProfile_TypeDefinitionIndex = 31765;

	class MadCatzNeoFightStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZNEOFIGHTSTICKMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZNEOFIGHTSTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
