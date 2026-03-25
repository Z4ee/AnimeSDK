#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XINPUTWINDOWSFIREFOXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15CE9F70)
#define INCONTROL_UNITYDEVICEPROFILES_XINPUTWINDOWSFIREFOXUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15CEB770)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XInputWindowsFirefoxUnityProfile_TypeDefinitionIndex = 31643;

	class XInputWindowsFirefoxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XINPUTWINDOWSFIREFOXUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XINPUTWINDOWSFIREFOXUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
