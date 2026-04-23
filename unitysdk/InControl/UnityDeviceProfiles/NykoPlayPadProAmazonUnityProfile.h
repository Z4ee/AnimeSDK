#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NYKOPLAYPADPROAMAZONUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x172A6B10)
#define INCONTROL_UNITYDEVICEPROFILES_NYKOPLAYPADPROAMAZONUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x172A7DB0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NykoPlayPadProAmazonUnityProfile_TypeDefinitionIndex = 37236;

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
