#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDONES30PROWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17235100)
#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDONES30PROWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x172365D0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoNES30ProWindowsUnityProfile_TypeDefinitionIndex = 37367;

	class EightBitdoNES30ProWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDONES30PROWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDONES30PROWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
