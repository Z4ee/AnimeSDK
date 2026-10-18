#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_APPLETVWIRELESSCONTROLLERUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA6D5B0)
#define INCONTROL_UNITYDEVICEPROFILES_APPLETVWIRELESSCONTROLLERUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA6E5F0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int AppleTVWirelessControllerUnityProfile_TypeDefinitionIndex = 40994;

	class AppleTVWirelessControllerUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_APPLETVWIRELESSCONTROLLERUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_APPLETVWIRELESSCONTROLLERUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
