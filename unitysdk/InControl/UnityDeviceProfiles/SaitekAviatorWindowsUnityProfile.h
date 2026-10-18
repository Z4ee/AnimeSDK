#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_SAITEKAVIATORWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BB27030)
#define INCONTROL_UNITYDEVICEPROFILES_SAITEKAVIATORWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB281D0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int SaitekAviatorWindowsUnityProfile_TypeDefinitionIndex = 41093;

	class SaitekAviatorWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_SAITEKAVIATORWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_SAITEKAVIATORWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
