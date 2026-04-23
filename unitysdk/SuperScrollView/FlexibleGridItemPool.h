#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_A0302E9AE0B8A2B9;
namespace RPG::Client { class PrefabCache; }
namespace SuperScrollView { class FlexibleGridItemPool_OnNewPrefabIns; }
namespace SuperScrollView { class LoopFlexibleGridViewItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_ADDANDRECYCLEITEM_OFFSET UNITYSDK_OFFSET(0xB9582F0)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_CLEARTMPRECYCLEDITEM_OFFSET UNITYSDK_OFFSET(0xB9587B0)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_CREATEITEM_OFFSET UNITYSDK_OFFSET(0xB957680)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_DESTROYALLITEM_OFFSET UNITYSDK_OFFSET(0xB958340)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_FINDITEM_OFFSET UNITYSDK_OFFSET(0xB957B80)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_GETITEM_1_OFFSET UNITYSDK_OFFSET(0xB958090)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_GETITEM_OFFSET UNITYSDK_OFFSET(0xB958040)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_GET_POOLEDITEMLIST_OFFSET UNITYSDK_OFFSET(0xB9591F0)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_INIT_OFFSET UNITYSDK_OFFSET(0xB957530)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_RECYCLEITEMREAL_OFFSET UNITYSDK_OFFSET(0xB957A50)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_RECYCLEITEM_OFFSET UNITYSDK_OFFSET(0xB958F60)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_REGISTERSLOTMAP_OFFSET UNITYSDK_OFFSET(0xB957E00)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_SETITEMVISIBLEBYPOS_OFFSET UNITYSDK_OFFSET(0xB957FB0)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0xB957420)

namespace SuperScrollView
{
	inline static constexpr unsigned int FlexibleGridItemPool_TypeDefinitionIndex = 44384;

	class FlexibleGridItemPool : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_mCurItemIdCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlexibleGridItemPool_TypeDefinitionIndex)->GetStaticField(0x2AE0);
		}
		::SuperScrollView::FlexibleGridItemPool_OnNewPrefabIns* onNewPrefabHandler; // 0x18
		::UnityEngine::GameObject* mPrefabObj; // 0x20
		::System::String* mPrefabName; // 0x28
		::System::Int32 mInitCreateCount; // 0x30
		::System::Collections::Generic::List_1<::SuperScrollView::LoopFlexibleGridViewItem*>* mSelectPooledItemList; // 0x38
		::System::Collections::Generic::List_1<::SuperScrollView::LoopFlexibleGridViewItem*>* mTmpPooledItemList; // 0x40
		::System::Collections::Generic::List_1<::SuperScrollView::LoopFlexibleGridViewItem*>* mPooledItemList; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::SuperScrollView::LoopFlexibleGridViewItem*>* mSlotByItemIndex; // 0x50
		::UnityEngine::RectTransform* mItemParent; // 0x58
		::RPG::Client::PrefabCache* prefabCache; // 0x60
		::Class_1_A0302E9AE0B8A2B9* mPool; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL__CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::GameObject* prefabObj, ::System::Int32 createCount, ::UnityEngine::RectTransform* parent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_INIT_OFFSET))(this, prefabObj, createCount, parent);
		}

		::SuperScrollView::LoopFlexibleGridViewItem* FindItem(::System::Int32 intanceID)
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_FINDITEM_OFFSET))(this, intanceID);
		}

		::System::Void RegisterSlotMap(::SuperScrollView::LoopFlexibleGridViewItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopFlexibleGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_REGISTERSLOTMAP_OFFSET))(this, item);
		}

		::SuperScrollView::LoopFlexibleGridViewItem* GetItem()
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_GETITEM_OFFSET))(this);
		}

		::SuperScrollView::LoopFlexibleGridViewItem* GetItem_1(::System::Int32 preferredSlotItemIndex)
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_GETITEM_1_OFFSET))(this, preferredSlotItemIndex);
		}

		::System::Void AddAndRecycleItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_ADDANDRECYCLEITEM_OFFSET))(this);
		}

		::System::Void DestroyAllItem(::System::Boolean im)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_DESTROYALLITEM_OFFSET))(this, im);
		}

		::SuperScrollView::LoopFlexibleGridViewItem* CreateItem()
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_CREATEITEM_OFFSET))(this);
		}

		::System::Void RecycleItemReal(::SuperScrollView::LoopFlexibleGridViewItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopFlexibleGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_RECYCLEITEMREAL_OFFSET))(this, item);
		}

		::System::Void SetItemVisibleByPos(::SuperScrollView::LoopFlexibleGridViewItem* item, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopFlexibleGridViewItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_SETITEMVISIBLEBYPOS_OFFSET))(this, item, visible);
		}

		::System::Void RecycleItem(::SuperScrollView::LoopFlexibleGridViewItem* item, ::System::Boolean isSeleced)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopFlexibleGridViewItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_RECYCLEITEM_OFFSET))(this, item, isSeleced);
		}

		::System::Void ClearTmpRecycledItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_CLEARTMPRECYCLEDITEM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::SuperScrollView::LoopFlexibleGridViewItem*>* get_PooledItemList()
		{
			return ((::System::Collections::Generic::List_1<::SuperScrollView::LoopFlexibleGridViewItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_GET_POOLEDITEMLIST_OFFSET))(this);
		}
	};
}
