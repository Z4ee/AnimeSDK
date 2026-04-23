#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XTR_G2_MACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x171E3690)
#define INCONTROL_NATIVEDEVICEPROFILES_XTR_G2_MACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171E37E0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XTR_G2_MacNativeProfile_TypeDefinitionIndex = 37575;

	class XTR_G2_MacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XTR_G2_MACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XTR_G2_MACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
