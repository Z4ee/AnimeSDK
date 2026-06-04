#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180AD170)
#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180AE460)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MogaProAndroidUnityProfile_TypeDefinitionIndex = 38007;

	class MogaProAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAPROANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAPROANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
