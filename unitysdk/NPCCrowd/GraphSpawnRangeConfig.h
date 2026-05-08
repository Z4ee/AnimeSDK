#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/SpawnRangeConfig.h"

#define NPCCROWD_GRAPHSPAWNRANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xD456910)

namespace NPCCrowd
{
	inline static constexpr unsigned int GraphSpawnRangeConfig_TypeDefinitionIndex = 39265;

	class GraphSpawnRangeConfig : public ::NPCCrowd::SpawnRangeConfig
	{
	public:
		::System::Int32 graphID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GRAPHSPAWNRANGECONFIG__CTOR_OFFSET))(this);
		}
	};
}
