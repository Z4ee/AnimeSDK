#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9129ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B5CA490)
#define INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9129ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5CB740)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int IpegaPG9129AndroidUnityProfile_TypeDefinitionIndex = 39671;

	class IpegaPG9129AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9129ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9129ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
