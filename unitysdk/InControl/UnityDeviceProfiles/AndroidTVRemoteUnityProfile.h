#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVREMOTEUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC089AE0)
#define INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVREMOTEUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC08A110)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int AndroidTVRemoteUnityProfile_TypeDefinitionIndex = 39640;

	class AndroidTVRemoteUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVREMOTEUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVREMOTEUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
