#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XTR_G2_WINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1801C7A0)
#define INCONTROL_NATIVEDEVICEPROFILES_XTR_G2_WINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1801C8D0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XTR_G2_WindowsNativeProfile_TypeDefinitionIndex = 38361;

	class XTR_G2_WindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XTR_G2_WINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XTR_G2_WINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
