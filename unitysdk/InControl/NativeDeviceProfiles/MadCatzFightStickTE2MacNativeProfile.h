#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZFIGHTSTICKTE2MACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18EB91D0)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZFIGHTSTICKTE2MACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB9250)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzFightStickTE2MacNativeProfile_TypeDefinitionIndex = 39875;

	class MadCatzFightStickTE2MacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZFIGHTSTICKTE2MACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZFIGHTSTICKTE2MACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
