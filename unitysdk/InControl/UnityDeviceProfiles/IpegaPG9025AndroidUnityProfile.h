#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9025ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17260220)
#define INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9025ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17261850)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int IpegaPG9025AndroidUnityProfile_TypeDefinitionIndex = 37268;

	class IpegaPG9025AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9025ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9025ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
