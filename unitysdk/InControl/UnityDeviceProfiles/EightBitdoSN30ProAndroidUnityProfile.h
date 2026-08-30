#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSN30PROANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B5A5AC0)
#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSN30PROANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5A6BF0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoSN30ProAndroidUnityProfile_TypeDefinitionIndex = 39655;

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
