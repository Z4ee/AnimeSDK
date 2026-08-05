#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCCrowdSpawnManager_FarthestDespawnCandidate.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_NPCCROWDSPAWNMANAGER_FARTHESTDESPAWNCANDIDATECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x17FB1AB0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_FARTHESTDESPAWNCANDIDATECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB1B50)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdSpawnManager_FarthestDespawnCandidateComparer_TypeDefinitionIndex = 48987;

	class NPCCrowdSpawnManager_FarthestDespawnCandidateComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_FARTHESTDESPAWNCANDIDATECOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::NPCCrowd::NPCCrowdSpawnManager_FarthestDespawnCandidate x, ::NPCCrowd::NPCCrowdSpawnManager_FarthestDespawnCandidate y)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::NPCCrowdSpawnManager_FarthestDespawnCandidate, ::NPCCrowd::NPCCrowdSpawnManager_FarthestDespawnCandidate))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_FARTHESTDESPAWNCANDIDATECOMPARER_COMPARE_OFFSET))(this, x, y);
		}
	};
}
