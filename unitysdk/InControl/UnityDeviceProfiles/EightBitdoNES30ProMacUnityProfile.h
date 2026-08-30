#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDONES30PROMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC09E910)
#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDONES30PROMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC09F9D0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoNES30ProMacUnityProfile_TypeDefinitionIndex = 39713;

	class EightBitdoNES30ProMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDONES30PROMACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDONES30PROMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
