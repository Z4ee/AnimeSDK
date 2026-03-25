#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15C57070)
#define INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C58760)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GoogleStadiaMacUnityProfile_TypeDefinitionIndex = 31598;

	class GoogleStadiaMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAMACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GOOGLESTADIAMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
