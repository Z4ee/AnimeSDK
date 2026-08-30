#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSF30PROANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC0A0C70)
#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSF30PROANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC0A1DA0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoSF30ProAndroidUnityProfile_TypeDefinitionIndex = 39653;

	class EightBitdoSF30ProAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSF30PROANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSF30PROANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
