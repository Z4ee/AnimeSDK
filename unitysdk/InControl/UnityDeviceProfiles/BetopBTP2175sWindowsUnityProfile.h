#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_BETOPBTP2175SWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18056890)
#define INCONTROL_UNITYDEVICEPROFILES_BETOPBTP2175SWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18057CA0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int BetopBTP2175sWindowsUnityProfile_TypeDefinitionIndex = 38097;

	class BetopBTP2175sWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BETOPBTP2175SWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BETOPBTP2175SWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
