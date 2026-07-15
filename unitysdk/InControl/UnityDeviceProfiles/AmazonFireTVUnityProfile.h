#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_AMAZONFIRETVUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xB492E60)
#define INCONTROL_UNITYDEVICEPROFILES_AMAZONFIRETVUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4940F0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int AmazonFireTVUnityProfile_TypeDefinitionIndex = 38769;

	class AmazonFireTVUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_AMAZONFIRETVUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_AMAZONFIRETVUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
