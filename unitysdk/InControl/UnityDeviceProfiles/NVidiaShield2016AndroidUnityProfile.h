#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELD2016ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180B4800)
#define INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELD2016ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180B5A40)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NVidiaShield2016AndroidUnityProfile_TypeDefinitionIndex = 38010;

	class NVidiaShield2016AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELD2016ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELD2016ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
