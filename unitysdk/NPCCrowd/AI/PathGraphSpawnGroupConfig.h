#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphSpawnGroupConfig_SpawnGroupType.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class PathGraphConfigExportComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPCONFIG_GET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0x112784F0)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11278450)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnGroupConfig_TypeDefinitionIndex = 53280;

	class PathGraphSpawnGroupConfig : public ::System::Object
	{
	public:
		::System::Int32 groupID; // 0x10
		::System::String* name; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* tagList; // 0x20
		::System::Int32 populationId; // 0x28
		::System::String* movementStyle; // 0x30
		::NPCCrowd::AI::PathGraphSpawnGroupConfig_SpawnGroupType type; // 0x38
		::NPCCrowd::AI::PathGraphConfigExportComponent* exportConfig; // 0x40

		::System::Void _ctor(::NPCCrowd::AI::PathGraphSpawnGroupConfig_SpawnGroupType type)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::PathGraphSpawnGroupConfig_SpawnGroupType))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPCONFIG__CTOR_OFFSET))(this, type);
		}

		::System::Int32 get_GroupIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPCONFIG_GET_GROUPINDEX_OFFSET))(this);
		}
	};
}
