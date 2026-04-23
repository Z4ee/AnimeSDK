#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_DROIDBOXPS3ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17229C50)
#define INCONTROL_UNITYDEVICEPROFILES_DROIDBOXPS3ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1722B270)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int DroidBoxPS3AndroidUnityProfile_TypeDefinitionIndex = 37247;

	class DroidBoxPS3AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_DROIDBOXPS3ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_DROIDBOXPS3ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
