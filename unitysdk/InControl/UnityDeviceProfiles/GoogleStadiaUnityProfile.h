#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15C58850)
#define INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C59EB0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GoogleStadiaUnityProfile_TypeDefinitionIndex = 31624;

	class GoogleStadiaUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
