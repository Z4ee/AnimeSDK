#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XTR_G2_WINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xB5422F0)
#define INCONTROL_UNITYDEVICEPROFILES_XTR_G2_WINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xB5423A0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XTR_G2_WindowsUnityProfile_TypeDefinitionIndex = 38943;

	class XTR_G2_WindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XTR_G2_WINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XTR_G2_WINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
