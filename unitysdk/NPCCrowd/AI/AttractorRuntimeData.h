#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/AI/FAttractorBase.h"
#include "unitysdk/NPCCrowd/AI/FConflictData.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavigationObstacleGridCellLocationFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace NPCCrowd::AI { class AttractorRuntime; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_ATTRACTORRUNTIMEDATA_ADDATTRACTOR_OFFSET UNITYSDK_OFFSET(0xD87DB40)
#define NPCCROWD_AI_ATTRACTORRUNTIMEDATA_INIT_OFFSET UNITYSDK_OFFSET(0xD87D7D0)
#define NPCCROWD_AI_ATTRACTORRUNTIMEDATA_ONATTRACTORENABLED_OFFSET UNITYSDK_OFFSET(0xD87E4C0)
#define NPCCROWD_AI_ATTRACTORRUNTIMEDATA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD87E530)
#define NPCCROWD_AI_ATTRACTORRUNTIMEDATA_SWITCHANDREMOVEATTRACTOR_OFFSET UNITYSDK_OFFSET(0xD87DFA0)
#define NPCCROWD_AI_ATTRACTORRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD87E900)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorRuntimeData_TypeDefinitionIndex = 57375;

	class AttractorRuntimeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorRuntime*>* handles; // 0x10
		::Unity::Collections::NativeArray_1<::System::Boolean> bIsUsing; // 0x18
		::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> NativeData; // 0x28
		::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> ObstacleGrid; // 0x48
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment> ObstacleLocation; // 0x98
		::Unity::Collections::NativeArray_1<::System::Int32> attractorHandler; // 0xA8
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> transform; // 0xB8
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> queryBox; // 0xC8
		::Unity::Collections::NativeArray_1<::NPCCrowd::AI::FConflictData> conflictedArea; // 0xD8
		::Unity::Collections::NativeArray_1<::NPCCrowd::AI::FAttractorBase> attractorBase; // 0xE8
		::System::Int32 Count; // 0xF8
		::System::Int32 capcity; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIMEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Int32 capcity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIMEDATA_INIT_OFFSET))(this, capcity);
		}

		::System::Void AddAttractor(::NPCCrowd::AI::AttractorRuntime* runtime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AttractorRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIMEDATA_ADDATTRACTOR_OFFSET))(this, runtime);
		}

		::System::Void SwitchAndRemoveAttractor(::NPCCrowd::AI::AttractorRuntime* runtime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AttractorRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIMEDATA_SWITCHANDREMOVEATTRACTOR_OFFSET))(this, runtime);
		}

		::System::Void OnAttractorEnabled(::NPCCrowd::AI::AttractorRuntime* runtime, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AttractorRuntime*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIMEDATA_ONATTRACTORENABLED_OFFSET))(this, runtime, enable);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIMEDATA_ONDESTROY_OFFSET))(this);
		}
	};
}
