#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVMIBOXREMOTEUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xB4954A0)
#define INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVMIBOXREMOTEUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xB495A70)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int AndroidTVMiBoxRemoteUnityProfile_TypeDefinitionIndex = 38780;

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
