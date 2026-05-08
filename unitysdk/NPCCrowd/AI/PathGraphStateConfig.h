#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class SpawnGroupRefList; }
namespace System { class String; }

#define NPCCROWD_AI_PATHGRAPHSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC7060)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphStateConfig_TypeDefinitionIndex = 46296;

	class PathGraphStateConfig : public ::System::Object
	{
	public:
		::System::Int32 stateID; // 0x10
		::System::String* name; // 0x18
		::NPCCrowd::AI::SpawnGroupRefList* spawnGroups; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATECONFIG__CTOR_OFFSET))(this);
		}
	};
}
