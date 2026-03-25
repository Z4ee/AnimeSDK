#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSN30PROANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15C3C750)
#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSN30PROANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C3DBD0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoSN30ProAndroidUnityProfile_TypeDefinitionIndex = 31536;

	class EightBitdoSN30ProAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSN30PROANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSN30PROANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
