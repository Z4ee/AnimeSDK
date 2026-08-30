#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B649FC0)
#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B64B390)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XboxOneUnityProfile_TypeDefinitionIndex = 39748;

	class XboxOneUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
