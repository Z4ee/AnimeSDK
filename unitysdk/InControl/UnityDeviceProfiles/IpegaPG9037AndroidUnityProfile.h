#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9037ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B5C6A70)
#define INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9037ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5C7CE0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int IpegaPG9037AndroidUnityProfile_TypeDefinitionIndex = 39668;

	class IpegaPG9037AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9037ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9037ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
