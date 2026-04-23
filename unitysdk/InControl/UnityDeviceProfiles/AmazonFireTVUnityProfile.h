#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_AMAZONFIRETVUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17217600)
#define INCONTROL_UNITYDEVICEPROFILES_AMAZONFIRETVUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17218C40)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int AmazonFireTVUnityProfile_TypeDefinitionIndex = 37229;

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
