#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MCBAZELADAPTERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BADA10)
#define INCONTROL_NATIVEDEVICEPROFILES_MCBAZELADAPTERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BADAA0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int McbazelAdapterMacNativeProfile_TypeDefinitionIndex = 31777;

	class McbazelAdapterMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MCBAZELADAPTERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MCBAZELADAPTERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
