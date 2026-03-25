#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9025ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15C62840)
#define INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9025ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C63E70)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int IpegaPG9025AndroidUnityProfile_TypeDefinitionIndex = 31548;

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
