#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACCHROMEUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC143350)
#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACCHROMEUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC1446D0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XboxOneMacChromeUnityProfile_TypeDefinitionIndex = 39755;

	class XboxOneMacChromeUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACCHROMEUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACCHROMEUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
