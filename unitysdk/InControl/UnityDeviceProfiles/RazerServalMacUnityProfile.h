#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_RAZERSERVALMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x172D3940)
#define INCONTROL_UNITYDEVICEPROFILES_RAZERSERVALMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x172D5070)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int RazerServalMacUnityProfile_TypeDefinitionIndex = 37331;

	class RazerServalMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_RAZERSERVALMACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_RAZERSERVALMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
