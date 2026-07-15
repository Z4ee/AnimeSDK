#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XTR55_G2_MACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x132E8690)
#define INCONTROL_NATIVEDEVICEPROFILES_XTR55_G2_MACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x132E8750)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XTR55_G2_MacNativeProfile_TypeDefinitionIndex = 39114;

	class XTR55_G2_MacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XTR55_G2_MACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XTR55_G2_MACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
