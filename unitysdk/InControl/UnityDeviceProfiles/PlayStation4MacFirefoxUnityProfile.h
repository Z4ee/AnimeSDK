#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACFIREFOXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180DB230)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACFIREFOXUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180DC4F0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4MacFirefoxUnityProfile_TypeDefinitionIndex = 38084;

	class PlayStation4MacFirefoxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACFIREFOXUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACFIREFOXUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
