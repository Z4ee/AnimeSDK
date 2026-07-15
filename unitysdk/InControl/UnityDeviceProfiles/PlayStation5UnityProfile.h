#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION5UNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xB529E30)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION5UNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xB52AED0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation5UnityProfile_TypeDefinitionIndex = 38886;

	class PlayStation5UnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION5UNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION5UNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
