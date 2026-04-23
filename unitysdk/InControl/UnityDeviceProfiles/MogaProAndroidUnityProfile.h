#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x172888C0)
#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17289F20)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MogaProAndroidUnityProfile_TypeDefinitionIndex = 37275;

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
