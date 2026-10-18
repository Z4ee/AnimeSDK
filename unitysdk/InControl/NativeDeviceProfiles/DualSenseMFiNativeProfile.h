#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_DUALSENSEMFINATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B9E73A0)
#define INCONTROL_NATIVEDEVICEPROFILES_DUALSENSEMFINATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E8680)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int DualSenseMFiNativeProfile_TypeDefinitionIndex = 41248;

	class DualSenseMFiNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_DUALSENSEMFINATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_DUALSENSEMFINATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
