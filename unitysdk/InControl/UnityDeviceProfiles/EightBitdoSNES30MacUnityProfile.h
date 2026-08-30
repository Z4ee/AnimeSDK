#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSNES30MACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B5A76E0)
#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSNES30MACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5A8020)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoSNES30MacUnityProfile_TypeDefinitionIndex = 39715;

	class EightBitdoSNES30MacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSNES30MACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSNES30MACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
