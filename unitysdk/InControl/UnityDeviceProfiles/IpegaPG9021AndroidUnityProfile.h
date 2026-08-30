#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9021ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC0C13D0)
#define INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9021ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC0C2630)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int IpegaPG9021AndroidUnityProfile_TypeDefinitionIndex = 39665;

	class IpegaPG9021AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9021ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9021ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
