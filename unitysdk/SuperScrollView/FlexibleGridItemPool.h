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

#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_ADDANDRECYCLEITEM_OFFSET UNITYSDK_OFFSET(0x197F54E0)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_CLEARTMPRECYCLEDITEM_OFFSET UNITYSDK_OFFSET(0x197F5A10)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_CREATEITEM_OFFSET UNITYSDK_OFFSET(0x197F47D0)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_DESTROYALLITEM_OFFSET UNITYSDK_OFFSET(0x197F5530)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_FINDITEM_OFFSET UNITYSDK_OFFSET(0x197F4D30)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_GETITEM_1_OFFSET UNITYSDK_OFFSET(0x197F52B0)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_GETITEM_OFFSET UNITYSDK_OFFSET(0x197F5260)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_GET_POOLEDITEMLIST_OFFSET UNITYSDK_OFFSET(0x197F5FB0)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_INIT_OFFSET UNITYSDK_OFFSET(0x197F4680)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_RECYCLEITEMREAL_OFFSET UNITYSDK_OFFSET(0x197F4BA0)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_RECYCLEITEM_OFFSET UNITYSDK_OFFSET(0x197F5CB0)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_REGISTERSLOTMAP_OFFSET UNITYSDK_OFFSET(0x197F5000)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_SETITEMVISIBLEBYPOS_OFFSET UNITYSDK_OFFSET(0x197F51D0)
#define SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x197F4570)

namespace SuperScrollView
{
	inline static constexpr unsigned int FlexibleGridItemPool_TypeDefinitionIndex = 48100;

	class FlexibleGridItemPool : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_mCurItemIdCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlexibleGridItemPool_TypeDefinitionIndex)->GetStaticField(0x11B50);
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

		::System::Void Init(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::UnityEngine::RectTransform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_INIT_OFFSET))(this, a1, a2, a3);
		}

		::SuperScrollView::LoopFlexibleGridViewItem* FindItem(::System::Int32 a1)
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_FINDITEM_OFFSET))(this, a1);
		}

		::System::Void RegisterSlotMap(::SuperScrollView::LoopFlexibleGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopFlexibleGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_REGISTERSLOTMAP_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopFlexibleGridViewItem* GetItem()
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_GETITEM_OFFSET))(this);
		}

		::SuperScrollView::LoopFlexibleGridViewItem* GetItem_1(::System::Int32 a1)
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_GETITEM_1_OFFSET))(this, a1);
		}

		::System::Void AddAndRecycleItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_ADDANDRECYCLEITEM_OFFSET))(this);
		}

		::System::Void DestroyAllItem(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_DESTROYALLITEM_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopFlexibleGridViewItem* CreateItem()
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_CREATEITEM_OFFSET))(this);
		}

		::System::Void RecycleItemReal(::SuperScrollView::LoopFlexibleGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopFlexibleGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_RECYCLEITEMREAL_OFFSET))(this, a1);
		}

		::System::Void SetItemVisibleByPos(::SuperScrollView::LoopFlexibleGridViewItem* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopFlexibleGridViewItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_SETITEMVISIBLEBYPOS_OFFSET))(this, a1, a2);
		}

		::System::Void RecycleItem(::SuperScrollView::LoopFlexibleGridViewItem* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopFlexibleGridViewItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_FLEXIBLEGRIDITEMPOOL_RECYCLEITEM_OFFSET))(this, a1, a2);
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
