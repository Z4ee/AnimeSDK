#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_AI_SPAWNGROUPREF_GET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0xD0BD1F0)
#define NPCCROWD_AI_SPAWNGROUPREF__CTOR_OFFSET UNITYSDK_OFFSET(0xD0BD2A0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int SpawnGroupRef_TypeDefinitionIndex = 47982;

	class SpawnGroupRef : public ::System::Object
	{
	public:
		::System::Int32 groupID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_SPAWNGROUPREF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_GroupIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_SPAWNGROUPREF_GET_GROUPINDEX_OFFSET))(this);
		}
	};
}
