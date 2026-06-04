#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEXMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180959C0)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEXMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18096CF0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechF310ModeXMacUnityProfile_TypeDefinitionIndex = 38052;

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
