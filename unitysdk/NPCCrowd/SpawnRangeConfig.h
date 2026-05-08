#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_SPAWNRANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xCE755C0)

namespace NPCCrowd
{
	inline static constexpr unsigned int SpawnRangeConfig_TypeDefinitionIndex = 82905;

	class SpawnRangeConfig : public ::System::Object
	{
	public:
		::System::Single innerRadius; // 0x10
		::System::Single outerRadius; // 0x14
		::System::Single height; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_SPAWNRANGECONFIG__CTOR_OFFSET))(this);
		}
	};
}
