#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_POWERANINTENDOSWITCHMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x132CC070)
#define INCONTROL_NATIVEDEVICEPROFILES_POWERANINTENDOSWITCHMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x132CD250)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PowerANintendoSwitchMacNativeProfile_TypeDefinitionIndex = 39111;

	class PowerANintendoSwitchMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_POWERANINTENDOSWITCHMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_POWERANINTENDOSWITCHMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
