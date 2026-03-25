#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9068ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15C66D80)
#define INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9068ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C683A0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int IpegaPG9068AndroidUnityProfile_TypeDefinitionIndex = 31551;

	class IpegaPG9068AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9068ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9068ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
