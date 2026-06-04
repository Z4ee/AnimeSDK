#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180820B0)
#define INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180833A0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GoogleStadiaUnityProfile_TypeDefinitionIndex = 38076;

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
