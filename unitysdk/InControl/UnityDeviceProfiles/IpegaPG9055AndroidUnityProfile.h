#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9055ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15C65670)
#define INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9055ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C66C90)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int IpegaPG9055AndroidUnityProfile_TypeDefinitionIndex = 31550;

	class IpegaPG9055AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9055ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9055ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
