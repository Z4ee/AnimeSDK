#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONESBLUETOOTHMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171EACD0)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONESBLUETOOTHMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171EC030)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxOneSBluetoothMacNativeProfile_TypeDefinitionIndex = 37578;

	class XboxOneSBluetoothMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONESBLUETOOTHMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONESBLUETOOTHMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
