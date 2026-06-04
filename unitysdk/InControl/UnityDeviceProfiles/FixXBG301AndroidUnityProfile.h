#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_FIXXBG301ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1806FB70)
#define INCONTROL_UNITYDEVICEPROFILES_FIXXBG301ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18070F50)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int FixXBG301AndroidUnityProfile_TypeDefinitionIndex = 37990;

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
