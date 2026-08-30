#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriWarePS5_AudioPortType.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXASRRACK_PLATFORMCONFIGPS5_DEFAULT_OFFSET UNITYSDK_OFFSET(0x164C1190)
#define CRIWARE_CRIATOMEXASRRACK_PLATFORMCONFIGPS5_ISSUPPORTEDPLATFORM_OFFSET UNITYSDK_OFFSET(0x2E002B0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAsrRack_PlatformConfigPS5_TypeDefinitionIndex = 38619;

	struct alignas(4) CriAtomExAsrRack_PlatformConfigPS5
	{
		::System::Int32 userId; // 0x10
		::CriWare::CriWarePS5_AudioPortType portType; // 0x14
		::System::UInt32 portFlag; // 0x18
		::System::UInt32 portAttr; // 0x1C

		::System::Boolean IsSupportedPlatform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_PLATFORMCONFIGPS5_ISSUPPORTEDPLATFORM_OFFSET))(this);
		}

		static ::CriWare::CriAtomExAsrRack_PlatformConfigPS5 Default()
		{
			return ((::CriWare::CriAtomExAsrRack_PlatformConfigPS5(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_PLATFORMCONFIGPS5_DEFAULT_OFFSET))();
		}
	};
}
