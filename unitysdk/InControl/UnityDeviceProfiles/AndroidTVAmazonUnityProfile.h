#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVAMAZONUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1804DBD0)
#define INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVAMAZONUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1804EE00)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int AndroidTVAmazonUnityProfile_TypeDefinitionIndex = 37962;

	class AndroidTVAmazonUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVAMAZONUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_ANDROIDTVAMAZONUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
