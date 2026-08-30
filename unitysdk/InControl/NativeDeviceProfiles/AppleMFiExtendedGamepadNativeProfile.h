#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_APPLEMFIEXTENDEDGAMEPADNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18E99A30)
#define INCONTROL_NATIVEDEVICEPROFILES_APPLEMFIEXTENDEDGAMEPADNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E9AD10)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int AppleMFiExtendedGamepadNativeProfile_TypeDefinitionIndex = 39949;

	class AppleMFiExtendedGamepadNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_APPLEMFIEXTENDEDGAMEPADNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_APPLEMFIEXTENDEDGAMEPADNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
