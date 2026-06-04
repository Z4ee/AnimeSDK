#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEBLUETOOTHANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1810BB40)
#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEBLUETOOTHANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1810CE50)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XboxOneBluetoothAndroidUnityProfile_TypeDefinitionIndex = 38028;

	class XboxOneBluetoothAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEBLUETOOTHANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEBLUETOOTHANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
