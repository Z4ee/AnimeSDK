#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOXWIRELESSMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15D07910)
#define INCONTROL_UNITYDEVICEPROFILES_XBOXWIRELESSMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15D08AF0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XboxWirelessMacUnityProfile_TypeDefinitionIndex = 31618;

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
