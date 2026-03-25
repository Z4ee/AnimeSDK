#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_ROCKCANDYXBOX360CONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BC9150)
#define INCONTROL_NATIVEDEVICEPROFILES_ROCKCANDYXBOX360CONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BC9270)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int RockCandyXbox360ControllerMacNativeProfile_TypeDefinitionIndex = 31817;

	class RockCandyXbox360ControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_ROCKCANDYXBOX360CONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_ROCKCANDYXBOX360CONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
