#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOX360DRIVERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x132B6710)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOX360DRIVERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x132B65A0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int Xbox360DriverMacNativeProfile_TypeDefinitionIndex = 39116;

	class Xbox360DriverMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOX360DRIVERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOX360DRIVERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
