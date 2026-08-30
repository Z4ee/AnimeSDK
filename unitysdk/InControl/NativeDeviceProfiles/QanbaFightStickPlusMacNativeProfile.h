#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_QANBAFIGHTSTICKPLUSMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B53CC50)
#define INCONTROL_NATIVEDEVICEPROFILES_QANBAFIGHTSTICKPLUSMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B53CCD0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int QanbaFightStickPlusMacNativeProfile_TypeDefinitionIndex = 39922;

	class QanbaFightStickPlusMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_QANBAFIGHTSTICKPLUSMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_QANBAFIGHTSTICKPLUSMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
