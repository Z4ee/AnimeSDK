#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_AMAZONFIRETVREMOTEUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1804BFF0)
#define INCONTROL_UNITYDEVICEPROFILES_AMAZONFIRETVREMOTEUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1804C700)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int AmazonFireTVRemoteUnityProfile_TypeDefinitionIndex = 37960;

	class AmazonFireTVRemoteUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_AMAZONFIRETVREMOTEUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_AMAZONFIRETVREMOTEUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
