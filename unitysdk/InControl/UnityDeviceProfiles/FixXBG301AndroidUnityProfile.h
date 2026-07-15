#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_FIXXBG301ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xB4B5490)
#define INCONTROL_UNITYDEVICEPROFILES_FIXXBG301ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4B6800)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int FixXBG301AndroidUnityProfile_TypeDefinitionIndex = 38798;

	class FixXBG301AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_FIXXBG301ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_FIXXBG301ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
