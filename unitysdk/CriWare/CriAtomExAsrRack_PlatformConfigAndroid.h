#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAsrRack_StreamType.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXASRRACK_PLATFORMCONFIGANDROID_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1AF000E0)
#define CRIWARE_CRIATOMEXASRRACK_PLATFORMCONFIGANDROID_ISSUPPORTEDPLATFORM_OFFSET UNITYSDK_OFFSET(0x7A9010)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAsrRack_PlatformConfigAndroid_TypeDefinitionIndex = 37758;

	struct alignas(4) CriAtomExAsrRack_PlatformConfigAndroid
	{
		::CriWare::CriAtomExAsrRack_StreamType streamType; // 0x10
		::System::Boolean enableSpatialAudio; // 0x14

		::System::Boolean IsSupportedPlatform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_PLATFORMCONFIGANDROID_ISSUPPORTEDPLATFORM_OFFSET))(this);
		}

		static ::CriWare::CriAtomExAsrRack_PlatformConfigAndroid Default()
		{
			return ((::CriWare::CriAtomExAsrRack_PlatformConfigAndroid(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_PLATFORMCONFIGANDROID_DEFAULT_OFFSET))();
		}
	};
}
