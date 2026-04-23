#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_HAMABLACKFORCEWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1725A770)
#define INCONTROL_UNITYDEVICEPROFILES_HAMABLACKFORCEWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1725BD90)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int HamaBlackForceWindowsUnityProfile_TypeDefinitionIndex = 37374;

	class HamaBlackForceWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_HAMABLACKFORCEWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_HAMABLACKFORCEWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
