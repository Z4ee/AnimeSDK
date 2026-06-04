#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION2WINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180CC950)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION2WINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180CDC20)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation2WindowsUnityProfile_TypeDefinitionIndex = 38124;

	class PlayStation2WindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION2WINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION2WINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
