#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF310MODEDMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18EAE770)
#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF310MODEDMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EAF920)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int LogitechF310ModeDMacNativeProfile_TypeDefinitionIndex = 39962;

	class LogitechF310ModeDMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF310MODEDMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF310MODEDMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
