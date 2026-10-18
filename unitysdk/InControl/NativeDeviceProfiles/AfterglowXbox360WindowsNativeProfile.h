#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_AFTERGLOWXBOX360WINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA02440)
#define INCONTROL_NATIVEDEVICEPROFILES_AFTERGLOWXBOX360WINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA03430)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int AfterglowXbox360WindowsNativeProfile_TypeDefinitionIndex = 41295;

	class AfterglowXbox360WindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_AFTERGLOWXBOX360WINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_AFTERGLOWXBOX360WINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
