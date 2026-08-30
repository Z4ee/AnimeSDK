#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOXWIRELESSMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC14CF70)
#define INCONTROL_UNITYDEVICEPROFILES_XBOXWIRELESSMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC14DE10)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XboxWirelessMacUnityProfile_TypeDefinitionIndex = 39737;

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
