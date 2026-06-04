#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/SDLControllerNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_SDLPLAYSTATION4NATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1800E600)
#define INCONTROL_NATIVEDEVICEPROFILES_SDLPLAYSTATION4NATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18010090)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SDLPlayStation4NativeProfile_TypeDefinitionIndex = 38322;

	class SDLPlayStation4NativeProfile : public ::InControl::NativeDeviceProfiles::SDLControllerNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLPLAYSTATION4NATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLPLAYSTATION4NATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
