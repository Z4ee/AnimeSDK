#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x172DEC20)
#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x172E0250)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int SteelSeriesFreeMacUnityProfile_TypeDefinitionIndex = 37333;

	class SteelSeriesFreeMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEMACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
