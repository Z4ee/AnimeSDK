#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZPORTABLEDRUMMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BAC990)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZPORTABLEDRUMMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BACA20)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzPortableDrumMacNativeProfile_TypeDefinitionIndex = 31766;

	class MadCatzPortableDrumMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZPORTABLEDRUMMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZPORTABLEDRUMMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
