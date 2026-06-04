#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOXWIRELESSMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18116E60)
#define INCONTROL_UNITYDEVICEPROFILES_XBOXWIRELESSMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18117D60)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XboxWirelessMacUnityProfile_TypeDefinitionIndex = 38070;

	class XboxWirelessMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXWIRELESSMACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXWIRELESSMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
