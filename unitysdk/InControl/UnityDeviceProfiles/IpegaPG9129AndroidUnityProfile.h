#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9129ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xB4D46E0)
#define INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9129ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4D5990)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int IpegaPG9129AndroidUnityProfile_TypeDefinitionIndex = 38812;

	class IpegaPG9129AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9129ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9129ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
