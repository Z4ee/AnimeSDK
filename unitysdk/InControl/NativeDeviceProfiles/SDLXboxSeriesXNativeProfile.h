#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/SDLControllerNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_SDLXBOXSERIESXNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18014960)
#define INCONTROL_NATIVEDEVICEPROFILES_SDLXBOXSERIESXNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18015F00)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SDLXboxSeriesXNativeProfile_TypeDefinitionIndex = 38329;

	class SDLXboxSeriesXNativeProfile : public ::InControl::NativeDeviceProfiles::SDLControllerNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLXBOXSERIESXNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLXBOXSERIESXNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
