#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_A0302E9AE0B8A2B9;
namespace RPG::Client { class PrefabCache; }
namespace SuperScrollView { class FlexibleGridItemPool_OnNewPrefabIns; }
namespace SuperScrollView { class LoopFlexibleGridViewItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_ADDANDRECYCLEITEM_OFFSET UNITYSDK_OFFSET(0xABE2180)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_CLEARTMPRECYCLEDITEM_OFFSET UNITYSDK_OFFSET(0xABE2440)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_CREATEITEM_OFFSET UNITYSDK_OFFSET(0xABE18E0)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_DESTROYALLITEM_OFFSET UNITYSDK_OFFSET(0xABE21D0)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_FINDITEM_OFFSET UNITYSDK_OFFSET(0xABE1D50)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_GETITEM_OFFSET UNITYSDK_OFFSET(0xABE1FD0)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_GET_POOLEDITEMLIST_OFFSET UNITYSDK_OFFSET(0xABE2E70)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_INIT_OFFSET UNITYSDK_OFFSET(0xABE1790)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_RECYCLEITEMREAL_OFFSET UNITYSDK_OFFSET(0xABE1CB0)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_RECYCLEITEM_OFFSET UNITYSDK_OFFSET(0xABE2C80)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_SETITEMVISIBLEBYPOS_OFFSET UNITYSDK_OFFSET(0xABE2B20)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0xABE16F0)

namespace SuperScrollView
{
	inline static constexpr unsigned int FlexibleGridItemPool_TypeDefinitionIndex = 38502;

	class FlexibleGridItemPool : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_mCurItemIdCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlexibleGridItemPool_TypeDefinitionIndex)->GetStaticField(0x12D60);
		}
		::SuperScrollView::FlexibleGridItemPool_OnNewPrefabIns* onNewPrefabHandler; // 0x18
		::UnityEngine::GameObject* mPrefabObj; // 0x20
		::System::String* mPrefabName; // 0x28
		::System::Int32 mInitCreateCount; // 0x30
		::System::Collections::Generic::List_1<::SuperScrollView::LoopFlexibleGridViewItem*>* mSelectPooledItemList; // 0x38
		::System::Collections::Generic::List_1<::SuperScrollView::LoopFlexibleGridViewItem*>* mTmpPooledItemList; // 0x40
		::System::Collections::Generic::List_1<::SuperScrollView::LoopFlexibleGridViewItem*>* mPooledItemList; // 0x48
		::UnityEngine::RectTransform* mItemParent; // 0x50
		::RPG::Client::PrefabCache* prefabCache; // 0x58
		::Class_1_A0302E9AE0B8A2B9* mPool; // 0x60

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

		::SuperScrollView::LoopFlexibleGridViewItem* GetItem()
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_GETITEM_OFFSET))(this);
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
