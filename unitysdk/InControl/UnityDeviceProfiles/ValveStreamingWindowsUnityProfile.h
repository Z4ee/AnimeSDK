#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_VALVESTREAMINGWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B633F20)
#define INCONTROL_UNITYDEVICEPROFILES_VALVESTREAMINGWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B635190)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int ValveStreamingWindowsUnityProfile_TypeDefinitionIndex = 39800;

	class ValveStreamingWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_VALVESTREAMINGWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_VALVESTREAMINGWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
