#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9023ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B5C4520)
#define INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9023ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5C5620)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int IpegaPG9023AndroidUnityProfile_TypeDefinitionIndex = 39666;

	class IpegaPG9023AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9023ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9023ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
