#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACBLUETOOTHUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180D9260)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACBLUETOOTHUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180D9C40)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4MacBluetoothUnityProfile_TypeDefinitionIndex = 38059;

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
