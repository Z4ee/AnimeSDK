#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_ROCKCANDYPS3CONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18003060)
#define INCONTROL_NATIVEDEVICEPROFILES_ROCKCANDYPS3CONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180030E0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int RockCandyPS3ControllerMacNativeProfile_TypeDefinitionIndex = 38268;

	class RockCandyPS3ControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_ROCKCANDYPS3CONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_ROCKCANDYPS3CONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
