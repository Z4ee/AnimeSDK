#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_APPLEMFIMICROGAMEPADNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B9E53F0)
#define INCONTROL_NATIVEDEVICEPROFILES_APPLEMFIMICROGAMEPADNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E5A00)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int AppleMFiMicroGamepadNativeProfile_TypeDefinitionIndex = 41247;

	class AppleMFiMicroGamepadNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_APPLEMFIMICROGAMEPADNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_APPLEMFIMICROGAMEPADNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
