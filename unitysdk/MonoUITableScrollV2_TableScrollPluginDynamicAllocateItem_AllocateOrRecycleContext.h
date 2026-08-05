#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollFloat.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINDYNAMICALLOCATEITEM_ALLOCATEORRECYCLECONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0x114AB830)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINDYNAMICALLOCATEITEM_ALLOCATEORRECYCLECONTEXT_GET_NEEDREFRESHLAYOUT_OFFSET UNITYSDK_OFFSET(0x730EE0)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginDynamicAllocateItem_AllocateOrRecycleContext_TypeDefinitionIndex = 74961;

struct alignas(4) MonoUITableScrollV2_TableScrollPluginDynamicAllocateItem_AllocateOrRecycleContext
{
	::System::Single removedSizeAtStart; // 0x10
	::System::Boolean hasRemovedItem; // 0x14
	::System::Int32 dataIndex_lastRemovedItemAtStart; // 0x18
	::NAPScrollView::DataStruct::ScrollFloat boundsEnd_lastRemovedItemAtStart; // 0x1C
	::System::Int32 dataIndex_lastRemovedItemAtEnd; // 0x24
	::NAPScrollView::DataStruct::ScrollFloat boundsStart_lastRemovedItemAtEnd; // 0x28
	::System::Boolean hasAddGameObjectWhenNoItem; // 0x30
	::System::Int32 addToStartWhenNoItem; // 0x34
	::System::Single itemSizeAvg; // 0x38
	::UnityEngine::Vector2Int LastAddItemRange; // 0x3C
	::System::Nullable_1<::System::Int32> startItemDataIndex; // 0x44
	::NAPScrollView::DataStruct::ScrollFloat boundsStart_startItemBeforeAdd; // 0x4C
	::System::Nullable_1<::System::Int32> endItemDataIndex; // 0x54
	::NAPScrollView::DataStruct::ScrollFloat boundsEnd_endItemBeforeAdd; // 0x5C
	::UnityEngine::Vector2Int AddItemRange; // 0x64
	::System::Boolean hasAddItem; // 0x6C

	::System::Boolean get_needRefreshLayout()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINDYNAMICALLOCATEITEM_ALLOCATEORRECYCLECONTEXT_GET_NEEDREFRESHLAYOUT_OFFSET))(this);
	}

	static ::MonoUITableScrollV2_TableScrollPluginDynamicAllocateItem_AllocateOrRecycleContext Create()
	{
		return ((::MonoUITableScrollV2_TableScrollPluginDynamicAllocateItem_AllocateOrRecycleContext(*)())((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINDYNAMICALLOCATEITEM_ALLOCATEORRECYCLECONTEXT_CREATE_OFFSET))();
	}
};
