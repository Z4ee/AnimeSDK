#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELDREMOTEANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180C6650)
#define INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELDREMOTEANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180C6C10)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NvidiaShieldRemoteAndroidUnityProfile_TypeDefinitionIndex = 38016;

	class NvidiaShieldRemoteAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELDREMOTEANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELDREMOTEANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
