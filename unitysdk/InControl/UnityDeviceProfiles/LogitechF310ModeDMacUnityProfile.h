#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEDMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15C6C8E0)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEDMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C6DEF0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechF310ModeDMacUnityProfile_TypeDefinitionIndex = 31599;

	class LogitechF310ModeDMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEDMACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF310MODEDMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
