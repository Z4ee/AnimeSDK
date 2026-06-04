#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACCHROMEUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1810CF40)
#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACCHROMEUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1810E320)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XboxOneMacChromeUnityProfile_TypeDefinitionIndex = 38088;

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
