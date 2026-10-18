#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XTR55_G2_WINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BB36A50)
#define INCONTROL_UNITYDEVICEPROFILES_XTR55_G2_WINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB36B00)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XTR55_G2_WindowsUnityProfile_TypeDefinitionIndex = 41098;

	class XTR55_G2_WindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XTR55_G2_WINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XTR55_G2_WINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
