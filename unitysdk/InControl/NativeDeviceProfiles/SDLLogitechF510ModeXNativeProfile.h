#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/SDLControllerNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_SDLLOGITECHF510MODEXNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B543F60)
#define INCONTROL_NATIVEDEVICEPROFILES_SDLLOGITECHF510MODEXNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5452A0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SDLLogitechF510ModeXNativeProfile_TypeDefinitionIndex = 39985;

	class SDLLogitechF510ModeXNativeProfile : public ::InControl::NativeDeviceProfiles::SDLControllerNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLLOGITECHF510MODEXNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLLOGITECHF510MODEXNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
