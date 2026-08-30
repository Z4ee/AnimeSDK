#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XTR_G2_MACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B637ED0)
#define INCONTROL_UNITYDEVICEPROFILES_XTR_G2_MACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B637FB0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XTR_G2_MacUnityProfile_TypeDefinitionIndex = 39734;

	class XTR_G2_MacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XTR_G2_MACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XTR_G2_MACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
