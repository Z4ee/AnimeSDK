#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/SDLControllerNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_SDLNINTENDOSWITCHNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA45420)
#define INCONTROL_NATIVEDEVICEPROFILES_SDLNINTENDOSWITCHNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA470F0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SDLNintendoSwitchNativeProfile_TypeDefinitionIndex = 41284;

	class SDLNintendoSwitchNativeProfile : public ::InControl::NativeDeviceProfiles::SDLControllerNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLNINTENDOSWITCHNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLNINTENDOSWITCHNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
