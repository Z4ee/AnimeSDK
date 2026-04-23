#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOX360LINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x172ECA40)
#define INCONTROL_UNITYDEVICEPROFILES_XBOX360LINUXUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x172EE610)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int Xbox360LinuxUnityProfile_TypeDefinitionIndex = 37311;

	class Xbox360LinuxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360LINUXUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360LINUXUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
