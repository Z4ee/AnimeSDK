#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_AI_SPAWNGROUPREF_GET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0xE92D250)
#define NPCCROWD_AI_SPAWNGROUPREF__CTOR_OFFSET UNITYSDK_OFFSET(0xE92D300)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int SpawnGroupRef_TypeDefinitionIndex = 71632;

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
