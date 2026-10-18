#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_OUYAAMAZONUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BB004A0)
#define INCONTROL_UNITYDEVICEPROFILES_OUYAAMAZONUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB015E0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int OuyaAmazonUnityProfile_TypeDefinitionIndex = 40933;

	class OuyaAmazonUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_OUYAAMAZONUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_OUYAAMAZONUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
