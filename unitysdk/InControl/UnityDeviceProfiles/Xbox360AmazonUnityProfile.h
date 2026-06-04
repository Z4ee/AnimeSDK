#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOX360AMAZONUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180FFC40)
#define INCONTROL_UNITYDEVICEPROFILES_XBOX360AMAZONUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18100F50)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int Xbox360AmazonUnityProfile_TypeDefinitionIndex = 37971;

	class Xbox360AmazonUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360AMAZONUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360AMAZONUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
