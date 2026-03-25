#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACSAFARIUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15CFED30)
#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACSAFARIUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15D00210)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XboxOneMacSafariUnityProfile_TypeDefinitionIndex = 31638;

	class XboxOneMacSafariUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACSAFARIUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACSAFARIUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
