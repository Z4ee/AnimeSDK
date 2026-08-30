#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_OUYAAMAZONUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC0FF980)
#define INCONTROL_UNITYDEVICEPROFILES_OUYAAMAZONUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC100AC0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int OuyaAmazonUnityProfile_TypeDefinitionIndex = 39636;

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
