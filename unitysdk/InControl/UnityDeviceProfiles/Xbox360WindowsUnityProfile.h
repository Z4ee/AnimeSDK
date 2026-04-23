#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOX360WINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x172F5E50)
#define INCONTROL_UNITYDEVICEPROFILES_XBOX360WINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x172F7CD0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int Xbox360WindowsUnityProfile_TypeDefinitionIndex = 37404;

	class Xbox360WindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360WINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360WINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
