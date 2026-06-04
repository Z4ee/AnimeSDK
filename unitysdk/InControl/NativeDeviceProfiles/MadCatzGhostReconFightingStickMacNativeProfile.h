#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZGHOSTRECONFIGHTINGSTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17FE8CF0)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZGHOSTRECONFIGHTINGSTICKMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FE8D70)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzGhostReconFightingStickMacNativeProfile_TypeDefinitionIndex = 38210;

	class MadCatzGhostReconFightingStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZGHOSTRECONFIGHTINGSTICKMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZGHOSTRECONFIGHTINGSTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
