#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EASYSMXESM9101ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC098A30)
#define INCONTROL_UNITYDEVICEPROFILES_EASYSMXESM9101ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC099D40)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int EasySmxEsm9101AndroidUnityProfile_TypeDefinitionIndex = 39648;

	class EasySmxEsm9101AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EASYSMXESM9101ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EASYSMXESM9101ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
