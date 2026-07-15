#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOGENERICANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xB4A70B0)
#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOGENERICANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4A8320)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoGenericAndroidUnityProfile_TypeDefinitionIndex = 38791;

	class EightBitdoGenericAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOGENERICANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOGENERICANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
