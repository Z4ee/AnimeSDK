#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOFC30PROANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xB4A5EB0)
#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOFC30PROANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4A6FC0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoFC30ProAndroidUnityProfile_TypeDefinitionIndex = 38790;

	class EightBitdoFC30ProAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOFC30PROANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOFC30PROANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
