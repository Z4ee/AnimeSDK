#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/AI/FAttractorBase.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace NPCCrowd::AI { class AttractorRuntime; }
namespace NPCCrowd::AI { class AttractorRuntimeData; }

#define NPCCROWD_AI_ATTRACTORQUERYENTITYPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x50AA60)
#define NPCCROWD_AI_ATTRACTORQUERYENTITYPROCESSOR_EXECUTEJOB_FINDCLOSESTENTITYBYTAG_OFFSET UNITYSDK_OFFSET(0x50AA70)
#define NPCCROWD_AI_ATTRACTORQUERYENTITYPROCESSOR_EXECUTEJOB__CTOR_OFFSET UNITYSDK_OFFSET(0x50AA50)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorQueryEntityProcessor_ExecuteJob_TypeDefinitionIndex = 46378;

	struct alignas(8) AttractorQueryEntityProcessor_ExecuteJob
	{
		// static const ::System::Single AttractorCD; // 0x0
		::Unity::Collections::NativeArray_1<::System::Boolean> _isUsing; // 0x10
		::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> _obstacleGrid; // 0x20
		::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> _data; // 0x70
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> _transformFragments; // 0x90
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> _queryBoxFragments; // 0xA0
		::Unity::Collections::NativeArray_1<::NPCCrowd::AI::FAttractorBase> attractorBase; // 0xB0
		::System::Single deltaTime; // 0xC0

		::System::Void _ctor(::NPCCrowd::AI::AttractorRuntimeData* runtimeData, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AttractorRuntimeData*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORQUERYENTITYPROCESSOR_EXECUTEJOB__CTOR_OFFSET))(this, runtimeData, deltaTime);
		}

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORQUERYENTITYPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET))(this, index);
		}

		::System::UInt32 FindClosestEntityByTag(::NPCCrowd::Ability::FTransformFragment transform, ::UnityEngine::Vector2 querySize, ::NPCCrowd::AI::AttractorRuntime* runtime)
		{
			return ((::System::UInt32(*)(::PVOID, ::NPCCrowd::Ability::FTransformFragment, ::UnityEngine::Vector2, ::NPCCrowd::AI::AttractorRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORQUERYENTITYPROCESSOR_EXECUTEJOB_FINDCLOSESTENTITYBYTAG_OFFSET))(this, transform, querySize, runtime);
		}
	};
}
