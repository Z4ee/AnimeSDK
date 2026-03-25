#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9129ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15C68490)
#define INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9129ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C69B00)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int IpegaPG9129AndroidUnityProfile_TypeDefinitionIndex = 31552;

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
