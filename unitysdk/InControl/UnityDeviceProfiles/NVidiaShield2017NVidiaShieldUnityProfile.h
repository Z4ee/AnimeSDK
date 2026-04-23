#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELD2017NVIDIASHIELDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x17294070)
#define INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELD2017NVIDIASHIELDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x172955C0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NVidiaShield2017NVidiaShieldUnityProfile_TypeDefinitionIndex = 37280;

	class NVidiaShield2017NVidiaShieldUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELD2017NVIDIASHIELDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELD2017NVIDIASHIELDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
