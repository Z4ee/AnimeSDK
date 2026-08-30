#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B5E9B30)
#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5EAD90)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MogaProMacUnityProfile_TypeDefinitionIndex = 39723;

	class MogaProMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAPROMACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAPROMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
