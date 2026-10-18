#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXSERIESXMFINATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA443B0)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXSERIESXMFINATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA45690)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxSeriesXMFiNativeProfile_TypeDefinitionIndex = 41252;

	class XboxSeriesXMFiNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXSERIESXMFINATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXSERIESXMFINATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
