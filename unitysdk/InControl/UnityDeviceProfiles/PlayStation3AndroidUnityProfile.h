#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC1056F0)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC106A10)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation3AndroidUnityProfile_TypeDefinitionIndex = 39684;

	class PlayStation3AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
