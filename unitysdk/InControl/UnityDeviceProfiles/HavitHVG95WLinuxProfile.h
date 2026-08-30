#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_HAVITHVG95WLINUXPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B5C1E80)
#define INCONTROL_UNITYDEVICEPROFILES_HAVITHVG95WLINUXPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5C30E0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int HavitHVG95WLinuxProfile_TypeDefinitionIndex = 39700;

	class HavitHVG95WLinuxProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_HAVITHVG95WLINUXPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_HAVITHVG95WLINUXPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
