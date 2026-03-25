#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXSERIESXBLUETOOTHMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BF5850)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXSERIESXBLUETOOTHMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF6BA0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxSeriesXBluetoothMacNativeProfile_TypeDefinitionIndex = 31860;

	class XboxSeriesXBluetoothMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXSERIESXBLUETOOTHMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXSERIESXBLUETOOTHMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
