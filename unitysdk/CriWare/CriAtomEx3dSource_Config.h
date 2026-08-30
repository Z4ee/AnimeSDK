#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEX3DSOURCE_CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x6B5360)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx3dSource_Config_TypeDefinitionIndex = 38715;

	struct alignas(4) CriAtomEx3dSource_Config
	{
		::System::Boolean enableVoicePriorityDecay; // 0x10
		::System::UInt32 randomPositionListMaxLength; // 0x14

		::System::Void _ctor(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DSOURCE_CONFIG__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
