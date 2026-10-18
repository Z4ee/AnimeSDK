#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACFIREFOXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BB132D0)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACFIREFOXUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB14530)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4MacFirefoxUnityProfile_TypeDefinitionIndex = 41048;

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
