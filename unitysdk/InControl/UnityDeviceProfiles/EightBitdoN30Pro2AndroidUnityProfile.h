#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDON30PRO2ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180625B0)
#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDON30PRO2ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18063740)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoN30Pro2AndroidUnityProfile_TypeDefinitionIndex = 37984;

	class EightBitdoN30Pro2AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDON30PRO2ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDON30PRO2ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
