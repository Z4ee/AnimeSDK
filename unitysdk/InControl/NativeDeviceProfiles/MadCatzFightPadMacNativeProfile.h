#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZFIGHTPADMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17FE8B40)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZFIGHTPADMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FE8BC0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzFightPadMacNativeProfile_TypeDefinitionIndex = 38207;

	class MadCatzFightPadMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZFIGHTPADMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZFIGHTPADMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
