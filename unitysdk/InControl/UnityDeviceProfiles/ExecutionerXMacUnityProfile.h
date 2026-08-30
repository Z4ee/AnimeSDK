#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EXECUTIONERXMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B5A8B10)
#define INCONTROL_UNITYDEVICEPROFILES_EXECUTIONERXMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5A9DA0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int ExecutionerXMacUnityProfile_TypeDefinitionIndex = 39716;

	class ExecutionerXMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EXECUTIONERXMACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EXECUTIONERXMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
