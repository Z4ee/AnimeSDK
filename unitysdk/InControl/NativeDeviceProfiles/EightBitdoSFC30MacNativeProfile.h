#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSFC30MACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1718E280)
#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSFC30MACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1718EE90)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoSFC30MacNativeProfile_TypeDefinitionIndex = 37560;

	class EightBitdoSFC30MacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSFC30MACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSFC30MACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
