#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/SDLControllerNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_SDLLOGITECHF710MODEXNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18009430)
#define INCONTROL_NATIVEDEVICEPROFILES_SDLLOGITECHF710MODEXNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1800A7D0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SDLLogitechF710ModeXNativeProfile_TypeDefinitionIndex = 38319;

	class SDLLogitechF710ModeXNativeProfile : public ::InControl::NativeDeviceProfiles::SDLControllerNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLLOGITECHF710MODEXNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLLOGITECHF710MODEXNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
