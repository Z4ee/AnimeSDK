#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5BLUETOOTHMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17FF8B20)
#define INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5BLUETOOTHMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FF9F20)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PlayStation5BluetoothMacNativeProfile_TypeDefinitionIndex = 38301;

	class PlayStation5BluetoothMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5BLUETOOTHMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION5BLUETOOTHMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
