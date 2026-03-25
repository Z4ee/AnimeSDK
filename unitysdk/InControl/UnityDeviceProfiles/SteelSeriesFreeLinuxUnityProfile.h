#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREELINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15CDFE40)
#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREELINUXUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE1150)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int SteelSeriesFreeLinuxUnityProfile_TypeDefinitionIndex = 31590;

	class SteelSeriesFreeLinuxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREELINUXUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREELINUXUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
