#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XTR55_G2_MACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x172E9240)
#define INCONTROL_UNITYDEVICEPROFILES_XTR55_G2_MACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x172E93A0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XTR55_G2_MacUnityProfile_TypeDefinitionIndex = 37334;

	class XTR55_G2_MacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XTR55_G2_MACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XTR55_G2_MACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
