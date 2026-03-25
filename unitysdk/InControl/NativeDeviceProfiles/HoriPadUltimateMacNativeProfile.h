#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIPADULTIMATEMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15B9BAF0)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIPADULTIMATEMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B9BB80)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriPadUltimateMacNativeProfile_TypeDefinitionIndex = 31720;

	class HoriPadUltimateMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIPADULTIMATEMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIPADULTIMATEMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
