#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_SWITCHPROCONTROLLERMFINATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18018DF0)
#define INCONTROL_NATIVEDEVICEPROFILES_SWITCHPROCONTROLLERMFINATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1801A150)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SwitchProControllerMFiNativeProfile_TypeDefinitionIndex = 38286;

	class SwitchProControllerMFiNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SWITCHPROCONTROLLERMFINATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SWITCHPROCONTROLLERMFINATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
