#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEX3DSOURCE_CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x424EC0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx3dSource_Config_TypeDefinitionIndex = 34933;

	struct alignas(4) CriAtomEx3dSource_Config
	{
		::System::Boolean enableVoicePriorityDecay; // 0x10
		::System::UInt32 randomPositionListMaxLength; // 0x14

		::System::Void _ctor(::System::Boolean enableVoicePriorityDecay, ::System::UInt32 randomPositionListMaxLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CONFIG__CTOR_OFFSET))(this, enableVoicePriorityDecay, randomPositionListMaxLength);
		}
	};
}
