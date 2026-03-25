#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_POWERANINTENDOSWITCHMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BC4A40)
#define INCONTROL_NATIVEDEVICEPROFILES_POWERANINTENDOSWITCHMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BC6060)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PowerANintendoSwitchMacNativeProfile_TypeDefinitionIndex = 31851;

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
