#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A0302E9AE0B8A2B9;
namespace RPG::Client { class PrefabCache; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define SUPERSCROLLVIEW_ITEMPOOL_CLEARTMPRECYCLEDITEM_OFFSET UNITYSDK_OFFSET(0xB95CFD0)
#define SUPERSCROLLVIEW_ITEMPOOL_CREATEITEM_OFFSET UNITYSDK_OFFSET(0xB95C150)
#define SUPERSCROLLVIEW_ITEMPOOL_DESTROYALLITEM_OFFSET UNITYSDK_OFFSET(0xB95CD70)
#define SUPERSCROLLVIEW_ITEMPOOL_FINDITEM_OFFSET UNITYSDK_OFFSET(0xB95C660)
#define SUPERSCROLLVIEW_ITEMPOOL_GETITEM_OFFSET UNITYSDK_OFFSET(0xB95CB20)
#define SUPERSCROLLVIEW_ITEMPOOL_GET_POOLEDITEMLIST_OFFSET UNITYSDK_OFFSET(0xB95D450)
#define SUPERSCROLLVIEW_ITEMPOOL_GET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0xB95BE10)
#define SUPERSCROLLVIEW_ITEMPOOL_GET_PREFABRECTCACHE_OFFSET UNITYSDK_OFFSET(0xB95BD40)
#define SUPERSCROLLVIEW_ITEMPOOL_INIT_OFFSET UNITYSDK_OFFSET(0xB95BF10)
#define SUPERSCROLLVIEW_ITEMPOOL_PREPAREITEM_OFFSET UNITYSDK_OFFSET(0xB95C8C0)
#define SUPERSCROLLVIEW_ITEMPOOL_RECYCLEITEMREAL_OFFSET UNITYSDK_OFFSET(0xB95C500)
#define SUPERSCROLLVIEW_ITEMPOOL_RECYCLEITEM_OFFSET UNITYSDK_OFFSET(0xB95D2A0)
#define SUPERSCROLLVIEW_ITEMPOOL_SETITEMVISIBLEBYPOS_OFFSET UNITYSDK_OFFSET(0xB95D210)
#define SUPERSCROLLVIEW_ITEMPOOL_SETPREFABLAYER_OFFSET UNITYSDK_OFFSET(0xB95C570)
#define SUPERSCROLLVIEW_ITEMPOOL_SETREDEFINEWH_OFFSET UNITYSDK_OFFSET(0xB95BEA0)
#define SUPERSCROLLVIEW_ITEMPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0xB95BE20)

namespace SuperScrollView
{
	inline static constexpr unsigned int ItemPool_TypeDefinitionIndex = 44403;

	class ItemPool : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_mCurItemIdCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ItemPool_TypeDefinitionIndex)->GetStaticField(0x2CC0);
		}
		::System::Collections::Generic::List_1<::SuperScrollView::LoopListViewItem2*>* mSelectedPooledItemList; // 0x10
		::UnityEngine::RectTransform* mItemParent; // 0x18
		::System::Collections::Generic::List_1<::SuperScrollView::LoopListViewItem2*>* mPooledItemList; // 0x20
		::System::Collections::Generic::List_1<::SuperScrollView::LoopListViewItem2*>* mTmpPooledItemList; // 0x28
		::UnityEngine::RectTransform* prefabRect; // 0x30
		::System::String* mPrefabName; // 0x38
		::RPG::Client::PrefabCache* prefabCache; // 0x40
		::Class_1_A0302E9AE0B8A2B9* mPool; // 0x48
		::UnityEngine::GameObject* mPrefabObj; // 0x50
		::System::Int32 mInitCreateCount; // 0x58
		::System::Single mStartPosOffset; // 0x5C
		::System::Single RedefineHeight; // 0x60
		::System::Single mPadding; // 0x64
		::System::Single RedefineWidth; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_PrefabRectCache()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_GET_PREFABRECTCACHE_OFFSET))(this);
		}

		::System::String* get_PrefabName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_GET_PREFABNAME_OFFSET))(this);
		}

		::System::Void SetRedefineWH(::System::Single redefineWidth, ::System::Single redefineHeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_SETREDEFINEWH_OFFSET))(this, redefineWidth, redefineHeight);
		}

		::System::Void Init(::UnityEngine::GameObject* prefabObj, ::System::Single padding, ::System::Single startPosOffset, ::System::Int32 createCount, ::UnityEngine::RectTransform* parent, ::System::Single redefineWidth, ::System::Single redefineHeight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::RectTransform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_INIT_OFFSET))(this, prefabObj, padding, startPosOffset, createCount, parent, redefineWidth, redefineHeight);
		}

		::System::Void SetPrefabLayer(::System::Int32 layer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_SETPREFABLAYER_OFFSET))(this, layer);
		}

		::SuperScrollView::LoopListViewItem2* FindItem(::System::Int32 intanceID)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_FINDITEM_OFFSET))(this, intanceID);
		}

		::SuperScrollView::LoopListViewItem2* GetItem()
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_GETITEM_OFFSET))(this);
		}

		::System::Void prepareItem(::SuperScrollView::LoopListViewItem2* tItem)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_PREPAREITEM_OFFSET))(this, tItem);
		}

		::System::Void DestroyAllItem(::System::Boolean allowDestroyingAssets, ::System::Boolean immediate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_DESTROYALLITEM_OFFSET))(this, allowDestroyingAssets, immediate);
		}

		::SuperScrollView::LoopListViewItem2* CreateItem()
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_CREATEITEM_OFFSET))(this);
		}

		::System::Void RecycleItemReal(::SuperScrollView::LoopListViewItem2* item)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_RECYCLEITEMREAL_OFFSET))(this, item);
		}

		::System::Void SetItemVisibleByPos(::SuperScrollView::LoopListViewItem2* item, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_SETITEMVISIBLEBYPOS_OFFSET))(this, item, visible);
		}

		::System::Void RecycleItem(::SuperScrollView::LoopListViewItem2* item, ::System::Boolean isSelected)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_RECYCLEITEM_OFFSET))(this, item, isSelected);
		}

		::System::Void ClearTmpRecycledItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_CLEARTMPRECYCLEDITEM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::SuperScrollView::LoopListViewItem2*>* get_PooledItemList()
		{
			return ((::System::Collections::Generic::List_1<::SuperScrollView::LoopListViewItem2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_GET_POOLEDITEMLIST_OFFSET))(this);
		}
	};
}
