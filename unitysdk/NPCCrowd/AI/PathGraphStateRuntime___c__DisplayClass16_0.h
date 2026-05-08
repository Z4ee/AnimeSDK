#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class PathGraphSpawnGroupRuntime; }

#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD22EDD0)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME___C__DISPLAYCLASS16_0__GETSPAWNGROUP_B__0_OFFSET UNITYSDK_OFFSET(0xD22EDE0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphStateRuntime___c__DisplayClass16_0_TypeDefinitionIndex = 48829;

	class PathGraphStateRuntime___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Int32 groupID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSpawnGroup_b__0(::NPCCrowd::AI::PathGraphSpawnGroupRuntime* groupRuntime)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::PathGraphSpawnGroupRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME___C__DISPLAYCLASS16_0__GETSPAWNGROUP_B__0_OFFSET))(this, groupRuntime);
		}
	};
}
