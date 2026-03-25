#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZARCADESTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BA9F50)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZARCADESTICKMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA9FE0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzArcadeStickMacNativeProfile_TypeDefinitionIndex = 31748;

	class MadCatzArcadeStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZARCADESTICKMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZARCADESTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
