#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION5BLUETOOTHMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15CCD170)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION5BLUETOOTHMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15CCEB50)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation5BluetoothMacUnityProfile_TypeDefinitionIndex = 31610;

	class PlayStation5BluetoothMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION5BLUETOOTHMACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION5BLUETOOTHMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
