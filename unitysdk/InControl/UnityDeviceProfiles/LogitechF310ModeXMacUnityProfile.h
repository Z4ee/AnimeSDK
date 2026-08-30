#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEXMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B5D0490)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEXMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5D1760)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechF310ModeXMacUnityProfile_TypeDefinitionIndex = 39719;

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
