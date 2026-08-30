#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGCOMMANDERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B518BD0)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGCOMMANDERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B518C90)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriFightingCommanderMacNativeProfile_TypeDefinitionIndex = 39833;

	class HoriFightingCommanderMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGCOMMANDERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGCOMMANDERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
