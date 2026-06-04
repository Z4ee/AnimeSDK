#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18110B10)
#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18111E40)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XboxOneMacUnityProfile_TypeDefinitionIndex = 38069;

	class XboxOneMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
