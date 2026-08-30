#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSNES30MACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x18EA6260)
#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSNES30MACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA6C00)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoSNES30MacNativeProfile_TypeDefinitionIndex = 39960;

	class EightBitdoSNES30MacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSNES30MACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSNES30MACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
