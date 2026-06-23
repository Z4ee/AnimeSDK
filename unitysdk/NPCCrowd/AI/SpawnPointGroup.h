#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/SpawnConfig.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class FeaturePointPathRefList; }
namespace NPCCrowd::AI { class SpawnPoint; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_SPAWNPOINTGROUP_GETPOPULATIONIDS_OFFSET UNITYSDK_OFFSET(0x8C24B10)
#define NPCCROWD_AI_SPAWNPOINTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x8C24C30)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int SpawnPointGroup_TypeDefinitionIndex = 49239;

	class SpawnPointGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::SpawnPoint*>* points; // 0x10
		::System::Int32 pathNodeID; // 0x18
		::NPCCrowd::AI::FeaturePointPathRefList* pathList; // 0x20
		::NPCCrowd::AI::SpawnConfig spawnConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_SPAWNPOINTGROUP__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetPopulationIds()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_SPAWNPOINTGROUP_GETPOPULATIONIDS_OFFSET))(this);
		}
	};
}
