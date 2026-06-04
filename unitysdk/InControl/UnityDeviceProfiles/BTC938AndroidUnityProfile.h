#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_BTC938ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18054110)
#define INCONTROL_UNITYDEVICEPROFILES_BTC938ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180553E0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int BTC938AndroidUnityProfile_TypeDefinitionIndex = 37975;

	class BTC938AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BTC938ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BTC938ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
