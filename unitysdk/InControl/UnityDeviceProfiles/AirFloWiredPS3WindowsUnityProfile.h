#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_AIRFLOWIREDPS3WINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B587040)
#define INCONTROL_UNITYDEVICEPROFILES_AIRFLOWIREDPS3WINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B588350)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int AirFloWiredPS3WindowsUnityProfile_TypeDefinitionIndex = 39763;

	class AirFloWiredPS3WindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_AIRFLOWIREDPS3WINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_AIRFLOWIREDPS3WINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
