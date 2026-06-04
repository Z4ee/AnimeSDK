#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MADCATZMICROCTRLRAMAZONUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x180A9650)
#define INCONTROL_UNITYDEVICEPROFILES_MADCATZMICROCTRLRAMAZONUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x180AA920)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MadCatzMicroCTRLRAmazonUnityProfile_TypeDefinitionIndex = 37967;

	class MadCatzMicroCTRLRAmazonUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MADCATZMICROCTRLRAMAZONUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MADCATZMICROCTRLRAMAZONUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
