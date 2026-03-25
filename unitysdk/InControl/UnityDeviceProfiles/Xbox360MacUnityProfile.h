#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOX360MACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15CF5360)
#define INCONTROL_UNITYDEVICEPROFILES_XBOX360MACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15CF6BE0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int Xbox360MacUnityProfile_TypeDefinitionIndex = 31616;

	class Xbox360MacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360MACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360MACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
