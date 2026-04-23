#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION5ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x172C9320)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION5ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x172CAA60)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation5AndroidUnityProfile_TypeDefinitionIndex = 37287;

	class PlayStation5AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION5ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION5ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
