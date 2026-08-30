#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWS10AEUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC149680)
#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWS10AEUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC14A840)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XboxOneWindows10AEUnityProfile_TypeDefinitionIndex = 39804;

	class XboxOneWindows10AEUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWS10AEUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWS10AEUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
