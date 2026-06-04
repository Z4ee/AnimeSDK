#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510MODEDMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18099590)
#define INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510MODEDMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1809A840)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LogitechF510ModeDMacUnityProfile_TypeDefinitionIndex = 38053;

	class LogitechF510ModeDMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510MODEDMACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LOGITECHF510MODEDMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
