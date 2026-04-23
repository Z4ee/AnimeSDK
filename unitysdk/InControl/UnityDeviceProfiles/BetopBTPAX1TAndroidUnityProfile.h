#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_BETOPBTPAX1TANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17224A50)
#define INCONTROL_UNITYDEVICEPROFILES_BETOPBTPAX1TANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17225EC0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int BetopBTPAX1TAndroidUnityProfile_TypeDefinitionIndex = 37245;

	class BetopBTPAX1TAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BETOPBTPAX1TANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BETOPBTPAX1TANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
