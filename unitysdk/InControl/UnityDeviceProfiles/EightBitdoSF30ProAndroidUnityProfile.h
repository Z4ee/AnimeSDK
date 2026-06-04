#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSF30PROANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18067010)
#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSF30PROANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180681A0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoSF30ProAndroidUnityProfile_TypeDefinitionIndex = 37986;

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
