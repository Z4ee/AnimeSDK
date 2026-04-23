#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5BLUETOOTHWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171BC120)
#define INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5BLUETOOTHWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171BD7C0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PlayStation5BluetoothWindowsNativeProfile_TypeDefinitionIndex = 37622;

	class PlayStation5BluetoothWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5BLUETOOTHWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5BLUETOOTHWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
