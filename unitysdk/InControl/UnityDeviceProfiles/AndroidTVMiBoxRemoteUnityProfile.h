#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVMIBOXREMOTEUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B58B220)
#define INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVMIBOXREMOTEUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B58B7F0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int AndroidTVMiBoxRemoteUnityProfile_TypeDefinitionIndex = 39639;

	class AndroidTVMiBoxRemoteUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVMIBOXREMOTEUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVMIBOXREMOTEUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
