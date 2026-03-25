#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_BUFFALOCLASSICMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15B868B0)
#define INCONTROL_NATIVEDEVICEPROFILES_BUFFALOCLASSICMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B873E0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int BuffaloClassicMacNativeProfile_TypeDefinitionIndex = 31837;

	class BuffaloClassicMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_BUFFALOCLASSICMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_BUFFALOCLASSICMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
