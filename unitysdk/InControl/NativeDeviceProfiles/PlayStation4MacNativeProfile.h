#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION4MACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171B7860)
#define INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION4MACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171B9040)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4MacNativeProfile_TypeDefinitionIndex = 37568;

	class PlayStation4MacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION4MACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PLAYSTATION4MACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
