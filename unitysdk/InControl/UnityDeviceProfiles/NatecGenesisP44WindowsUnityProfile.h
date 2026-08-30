#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NATECGENESISP44WINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC0F41C0)
#define INCONTROL_UNITYDEVICEPROFILES_NATECGENESISP44WINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC0F54D0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NatecGenesisP44WindowsUnityProfile_TypeDefinitionIndex = 39787;

	class NatecGenesisP44WindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NATECGENESISP44WINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NATECGENESISP44WINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
