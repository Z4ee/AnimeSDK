#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOX360MACSAFARIUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15CF3CC0)
#define INCONTROL_UNITYDEVICEPROFILES_XBOX360MACSAFARIUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15CF5270)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int Xbox360MacSafariUnityProfile_TypeDefinitionIndex = 31635;

	class Xbox360MacSafariUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360MACSAFARIUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360MACSAFARIUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
