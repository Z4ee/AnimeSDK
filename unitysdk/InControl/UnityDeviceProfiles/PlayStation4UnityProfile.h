#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4UNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B6181E0)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4UNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B619290)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4UnityProfile_TypeDefinitionIndex = 39744;

	class PlayStation4UnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4UNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4UNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
