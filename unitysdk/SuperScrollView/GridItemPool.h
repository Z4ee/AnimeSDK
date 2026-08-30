#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A0302E9AE0B8A2B9;
namespace RPG::Client { class PrefabCache; }
namespace SuperScrollView { class GridItemPool_OnNewPrefabIns; }
namespace SuperScrollView { class LoopGridViewItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define SUPERSCROLLVIEW_GRIDITEMPOOL_ADDANDRECYCLEITEM_OFFSET UNITYSDK_OFFSET(0xE946ED0)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_CLEARTMPRECYCLEDITEM_OFFSET UNITYSDK_OFFSET(0xE9471E0)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_CREATEITEM_OFFSET UNITYSDK_OFFSET(0xE946650)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_DESTROYALLITEM_OFFSET UNITYSDK_OFFSET(0xE946F20)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_FINDITEM_OFFSET UNITYSDK_OFFSET(0xE946AB0)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_GETITEM_OFFSET UNITYSDK_OFFSET(0xE946D50)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_GET_POOLEDITEMLIST_OFFSET UNITYSDK_OFFSET(0xE947720)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_INIT_OFFSET UNITYSDK_OFFSET(0xE946500)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_RECYCLEITEMREAL_OFFSET UNITYSDK_OFFSET(0xE9469F0)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_RECYCLEITEM_OFFSET UNITYSDK_OFFSET(0xE9474E0)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_SETITEMVISIBLEBYPOS_OFFSET UNITYSDK_OFFSET(0xE947380)
#define SUPERSCROLLVIEW_GRIDITEMPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0xE946480)

namespace SuperScrollView
{
	inline static constexpr unsigned int GridItemPool_TypeDefinitionIndex = 48108;

	class GridItemPool : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_mCurItemIdCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GridItemPool_TypeDefinitionIndex)->GetStaticField(0x108D0);
		}
		::System::Collections::Generic::List_1<::SuperScrollView::LoopGridViewItem*>* mSelectPooledItemList; // 0x10
		::UnityEngine::GameObject* mPrefabObj; // 0x18
		::System::Collections::Generic::List_1<::SuperScrollView::LoopGridViewItem*>* mPooledItemList; // 0x20
		::UnityEngine::RectTransform* mItemParent; // 0x28
		::System::Collections::Generic::List_1<::SuperScrollView::LoopGridViewItem*>* mTmpPooledItemList; // 0x30
		::RPG::Client::PrefabCache* prefabCache; // 0x38
		::System::String* mPrefabName; // 0x40
		::SuperScrollView::GridItemPool_OnNewPrefabIns* onNewPrefabHandler; // 0x48
		::Class_1_A0302E9AE0B8A2B9* mPool; // 0x50
		::System::Int32 mInitCreateCount; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL__CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::UnityEngine::RectTransform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_INIT_OFFSET))(this, a1, a2, a3);
		}

		::SuperScrollView::LoopGridViewItem* FindItem(::System::Int32 a1)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_FINDITEM_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopGridViewItem* GetItem()
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_GETITEM_OFFSET))(this);
		}

		::System::Void AddAndRecycleItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_ADDANDRECYCLEITEM_OFFSET))(this);
		}

		::System::Void DestroyAllItem(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_DESTROYALLITEM_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopGridViewItem* CreateItem()
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_CREATEITEM_OFFSET))(this);
		}

		::System::Void RecycleItemReal(::SuperScrollView::LoopGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_RECYCLEITEMREAL_OFFSET))(this, a1);
		}

		::System::Void SetItemVisibleByPos(::SuperScrollView::LoopGridViewItem* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_SETITEMVISIBLEBYPOS_OFFSET))(this, a1, a2);
		}

		::System::Void RecycleItem(::SuperScrollView::LoopGridViewItem* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_RECYCLEITEM_OFFSET))(this, a1, a2);
		}

		::System::Void ClearTmpRecycledItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_CLEARTMPRECYCLEDITEM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::SuperScrollView::LoopGridViewItem*>* get_PooledItemList()
		{
			return ((::System::Collections::Generic::List_1<::SuperScrollView::LoopGridViewItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_GET_POOLEDITEMLIST_OFFSET))(this);
		}
	};
}
