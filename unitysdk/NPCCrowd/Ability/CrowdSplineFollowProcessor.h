#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/CrowdSplineSnapshot.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilitySplineFollowFragment.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Ability { class CrowdSplineBakeCacheManager; }
namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }

#define NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_EXECUTEATINDEX_OFFSET UNITYSDK_OFFSET(0x10B3BE80)
#define NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10B3C6F0)
#define NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_FINDSAMPLEINDEX_OFFSET UNITYSDK_OFFSET(0x10B3C410)
#define NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_UPDATECACHESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x10B3C4F0)
#define NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x10B3C910)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CrowdSplineFollowProcessor_TypeDefinitionIndex = 87978;

	class CrowdSplineFollowProcessor : public ::System::Object
	{
	public:
		::NPCCrowd::Ability::CrowdSplineSnapshot _snapshot; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR__CTOR_OFFSET))(this);
		}

		static ::System::Void ExecuteAtIndex(::System::Int32 idx, ::System::Single deltaTime, ::System::Single currentTime, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySplineFollowFragment>& runtimeSplineFollow, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment>& runtimeMoveTarget, ::NPCCrowd::Ability::CrowdSplineSnapshot& snapshot)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single, ::System::Single, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySplineFollowFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment>&, ::NPCCrowd::Ability::CrowdSplineSnapshot&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_EXECUTEATINDEX_OFFSET))(idx, deltaTime, currentTime, runtimeSplineFollow, runtimeMoveTarget, snapshot);
		}

		static ::System::Int32 FindSampleIndex(::System::Int32 index, ::System::Single progressedDistance, ::System::Int32 offset, ::System::Int32 count, ::Unity::Collections::NativeArray_1<::System::Single> distances)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Single, ::System::Int32, ::System::Int32, ::Unity::Collections::NativeArray_1<::System::Single>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_FINDSAMPLEINDEX_OFFSET))(index, progressedDistance, offset, count, distances);
		}

		::System::Void UpdateCacheSnapshot(::NPCCrowd::Ability::CrowdSplineBakeCacheManager* cacheManager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::CrowdSplineBakeCacheManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_UPDATECACHESNAPSHOT_OFFSET))(this, cacheManager);
		}

		::Unity::Jobs::JobHandle Execute(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEFOLLOWPROCESSOR_EXECUTE_OFFSET))(this, runtime, deltaTime, dependsOn);
		}
	};
}
