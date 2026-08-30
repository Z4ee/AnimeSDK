#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/SDLControllerNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_SDLPLAYSTATION5NATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1495BB90)
#define INCONTROL_NATIVEDEVICEPROFILES_SDLPLAYSTATION5NATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1495D610)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SDLPlayStation5NativeProfile_TypeDefinitionIndex = 39991;

	class SDLPlayStation5NativeProfile : public ::InControl::NativeDeviceProfiles::SDLControllerNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLPLAYSTATION5NATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLPLAYSTATION5NATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
