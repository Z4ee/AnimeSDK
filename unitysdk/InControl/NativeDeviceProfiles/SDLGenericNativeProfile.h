#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/SDLControllerNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_SDLGENERICNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15BCAC30)
#define INCONTROL_NATIVEDEVICEPROFILES_SDLGENERICNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BCCEC0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SDLGenericNativeProfile_TypeDefinitionIndex = 31864;

	class SDLGenericNativeProfile : public ::InControl::NativeDeviceProfiles::SDLControllerNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLGENERICNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLGENERICNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
