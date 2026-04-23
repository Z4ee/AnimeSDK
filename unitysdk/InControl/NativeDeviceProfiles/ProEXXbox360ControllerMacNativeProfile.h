#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PROEXXBOX360CONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171C3CB0)
#define INCONTROL_NATIVEDEVICEPROFILES_PROEXXBOX360CONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171C3D40)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int ProEXXbox360ControllerMacNativeProfile_TypeDefinitionIndex = 37521;

	class ProEXXbox360ControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PROEXXBOX360CONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PROEXXBOX360CONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
