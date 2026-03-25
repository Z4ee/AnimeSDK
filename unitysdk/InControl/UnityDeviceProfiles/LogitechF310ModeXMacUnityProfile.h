#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEXMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15C6F6E0)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEXMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C70DC0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechF310ModeXMacUnityProfile_TypeDefinitionIndex = 31600;

	class LogitechF310ModeXMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEXMACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEXMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
