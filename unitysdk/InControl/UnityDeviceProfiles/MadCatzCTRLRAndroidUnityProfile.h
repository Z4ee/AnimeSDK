#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MADCATZCTRLRANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17282D50)
#define INCONTROL_UNITYDEVICEPROFILES_MADCATZCTRLRANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x172842A0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MadCatzCTRLRAndroidUnityProfile_TypeDefinitionIndex = 37273;

	class MadCatzCTRLRAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MADCATZCTRLRANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MADCATZCTRLRANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
