#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3SHENGHICWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180D2DE0)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3SHENGHICWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180D40D0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation3ShenghicWindowsUnityProfile_TypeDefinitionIndex = 38126;

	class PlayStation3ShenghicWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3SHENGHICWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3SHENGHICWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
