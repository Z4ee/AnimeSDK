#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3WINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BB0C4D0)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3WINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0D7E0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation3WindowsUnityProfile_TypeDefinitionIndex = 41091;

	class PlayStation3WindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3WINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3WINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
