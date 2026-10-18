#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_DUALSHOCK4MFINATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA08F00)
#define INCONTROL_NATIVEDEVICEPROFILES_DUALSHOCK4MFINATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA0A1E0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int DualShock4MFiNativeProfile_TypeDefinitionIndex = 41249;

	class DualShock4MFiNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_DUALSHOCK4MFINATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_DUALSHOCK4MFINATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
