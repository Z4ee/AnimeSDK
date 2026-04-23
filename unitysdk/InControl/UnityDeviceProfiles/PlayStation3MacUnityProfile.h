#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3MACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x172B3550)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3MACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x172B4CC0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation3MacUnityProfile_TypeDefinitionIndex = 37326;

	class PlayStation3MacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3MACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3MACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
