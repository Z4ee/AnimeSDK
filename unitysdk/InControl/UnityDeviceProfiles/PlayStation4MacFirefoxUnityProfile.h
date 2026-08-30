#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACFIREFOXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC1127B0)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACFIREFOXUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC113A10)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4MacFirefoxUnityProfile_TypeDefinitionIndex = 39751;

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
