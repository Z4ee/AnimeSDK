#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NYKOPLAYPADPROAMAZONUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180C6D00)
#define INCONTROL_UNITYDEVICEPROFILES_NYKOPLAYPADPROAMAZONUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180C7CA0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NykoPlayPadProAmazonUnityProfile_TypeDefinitionIndex = 37968;

	class NykoPlayPadProAmazonUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NYKOPLAYPADPROAMAZONUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NYKOPLAYPADPROAMAZONUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
