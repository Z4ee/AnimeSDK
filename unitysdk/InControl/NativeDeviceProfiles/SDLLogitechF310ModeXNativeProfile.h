#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/SDLControllerNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_SDLLOGITECHF310MODEXNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B542B30)
#define INCONTROL_NATIVEDEVICEPROFILES_SDLLOGITECHF310MODEXNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B543E70)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SDLLogitechF310ModeXNativeProfile_TypeDefinitionIndex = 39984;

	class SDLLogitechF310ModeXNativeProfile : public ::InControl::NativeDeviceProfiles::SDLControllerNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLLOGITECHF310MODEXNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLLOGITECHF310MODEXNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
