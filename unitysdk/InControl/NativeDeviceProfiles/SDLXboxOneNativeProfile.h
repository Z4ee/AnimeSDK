#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/SDLControllerNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_SDLXBOXONENATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18013300)
#define INCONTROL_NATIVEDEVICEPROFILES_SDLXBOXONENATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18014870)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SDLXboxOneNativeProfile_TypeDefinitionIndex = 38327;

	class SDLXboxOneNativeProfile : public ::InControl::NativeDeviceProfiles::SDLControllerNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLXBOXONENATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLXBOXONENATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
