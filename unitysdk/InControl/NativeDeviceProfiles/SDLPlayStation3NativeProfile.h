#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/SDLControllerNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_SDLPLAYSTATION3NATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1800C6F0)
#define INCONTROL_NATIVEDEVICEPROFILES_SDLPLAYSTATION3NATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1800E510)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SDLPlayStation3NativeProfile_TypeDefinitionIndex = 38321;

	class SDLPlayStation3NativeProfile : public ::InControl::NativeDeviceProfiles::SDLControllerNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLPLAYSTATION3NATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLPLAYSTATION3NATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
