#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELD2017ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x172929D0)
#define INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELD2017ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17293F80)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NVidiaShield2017AndroidUnityProfile_TypeDefinitionIndex = 37279;

	class NVidiaShield2017AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELD2017ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELD2017ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
