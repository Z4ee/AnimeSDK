#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/SDLControllerNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_SDLNINTENDOSWITCHNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B5467C0)
#define INCONTROL_NATIVEDEVICEPROFILES_SDLNINTENDOSWITCHNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B548490)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SDLNintendoSwitchNativeProfile_TypeDefinitionIndex = 39987;

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
