#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_APPLEMFIUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA6B8B0)
#define INCONTROL_UNITYDEVICEPROFILES_APPLEMFIUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA6C8C0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int AppleMFiUnityProfile_TypeDefinitionIndex = 41036;

	class AppleMFiUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_APPLEMFIUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_APPLEMFIUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
