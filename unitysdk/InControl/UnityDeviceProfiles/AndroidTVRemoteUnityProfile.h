#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVREMOTEUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15C1D1B0)
#define INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVREMOTEUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C1D960)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int AndroidTVRemoteUnityProfile_TypeDefinitionIndex = 31521;

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
