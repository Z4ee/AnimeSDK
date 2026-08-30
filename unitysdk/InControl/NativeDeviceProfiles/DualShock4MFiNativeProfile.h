#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_DUALSHOCK4MFINATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B50A2A0)
#define INCONTROL_NATIVEDEVICEPROFILES_DUALSHOCK4MFINATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B50B580)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int DualShock4MFiNativeProfile_TypeDefinitionIndex = 39952;

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
