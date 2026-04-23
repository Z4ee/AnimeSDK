#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSF30PROANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x172366C0)
#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSF30PROANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17237B40)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoSF30ProAndroidUnityProfile_TypeDefinitionIndex = 37254;

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
