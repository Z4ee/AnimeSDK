#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSNES30MACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1735C670)
#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSNES30MACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1735D010)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoSNES30MacNativeProfile_TypeDefinitionIndex = 39101;

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
