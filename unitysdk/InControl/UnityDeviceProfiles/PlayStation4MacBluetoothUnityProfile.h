#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACBLUETOOTHUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B6126B0)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACBLUETOOTHUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B613030)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4MacBluetoothUnityProfile_TypeDefinitionIndex = 39726;

	class PlayStation4MacBluetoothUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACBLUETOOTHUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACBLUETOOTHUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
