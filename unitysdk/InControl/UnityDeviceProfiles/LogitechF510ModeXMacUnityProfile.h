#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510MODEXMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1809BCE0)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510MODEXMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1809D010)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechF510ModeXMacUnityProfile_TypeDefinitionIndex = 38054;

	class LogitechF510ModeXMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510MODEXMACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510MODEXMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
