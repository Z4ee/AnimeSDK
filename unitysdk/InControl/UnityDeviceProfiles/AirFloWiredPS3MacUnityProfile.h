#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_AIRFLOWIREDPS3MACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15C16350)
#define INCONTROL_UNITYDEVICEPROFILES_AIRFLOWIREDPS3MACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C17A30)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int AirFloWiredPS3MacUnityProfile_TypeDefinitionIndex = 31592;

	class AirFloWiredPS3MacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_AIRFLOWIREDPS3MACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_AIRFLOWIREDPS3MACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
