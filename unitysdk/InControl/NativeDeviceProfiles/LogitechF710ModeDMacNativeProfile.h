#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710MODEDMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B5214D0)
#define INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710MODEDMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B522680)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int LogitechF710ModeDMacNativeProfile_TypeDefinitionIndex = 39964;

	class LogitechF710ModeDMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710MODEDMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_LOGITECHF710MODEDMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
