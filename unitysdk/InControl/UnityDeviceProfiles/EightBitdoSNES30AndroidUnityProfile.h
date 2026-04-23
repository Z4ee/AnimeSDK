#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSNES30ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1723B6A0)
#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSNES30ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1723C1F0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoSNES30AndroidUnityProfile_TypeDefinitionIndex = 37257;

	class EightBitdoSNES30AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSNES30ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSNES30ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
