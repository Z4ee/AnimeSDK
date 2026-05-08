#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_LEVELFAILEDCAMERASEQUENCECONFIG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x7E43D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig_TypeDefinitionIndex = 70813;

	struct alignas(4) ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig
	{
		::System::Single firstPhaseDuration; // 0x10
		::System::Single secondPhaseDuration; // 0x14
		::System::Single heightRatio; // 0x18
		::System::Single focusHeightRatio; // 0x1C
		::System::Single minDistance; // 0x20
		::System::Single adjustDistance; // 0x24

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_LEVELFAILEDCAMERASEQUENCECONFIG_GET_ISVALID_OFFSET))(this);
		}
	};
}
