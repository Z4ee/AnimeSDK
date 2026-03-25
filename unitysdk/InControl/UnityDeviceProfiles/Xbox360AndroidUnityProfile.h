#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOX360ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15CED8C0)
#define INCONTROL_UNITYDEVICEPROFILES_XBOX360ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15CEEF70)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int Xbox360AndroidUnityProfile_TypeDefinitionIndex = 31574;

	class Xbox360AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
