#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWS10UNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18114760)
#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWS10UNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18115980)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XboxOneWindows10UnityProfile_TypeDefinitionIndex = 38138;

	class XboxOneWindows10UnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWS10UNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWS10UNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
