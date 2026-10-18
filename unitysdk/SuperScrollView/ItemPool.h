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

#define SUPERSCROLLVIEW_ITEMPOOL_CLEARTMPRECYCLEDITEM_OFFSET UNITYSDK_OFFSET(0xE99EF90)
#define SUPERSCROLLVIEW_ITEMPOOL_CREATEITEM_OFFSET UNITYSDK_OFFSET(0xE99DFF0)
#define SUPERSCROLLVIEW_ITEMPOOL_DESTROYALLITEM_OFFSET UNITYSDK_OFFSET(0xE99ECB0)
#define SUPERSCROLLVIEW_ITEMPOOL_FINDITEM_OFFSET UNITYSDK_OFFSET(0xE99E560)
#define SUPERSCROLLVIEW_ITEMPOOL_GETITEM_OFFSET UNITYSDK_OFFSET(0xE99EA30)
#define SUPERSCROLLVIEW_ITEMPOOL_GET_POOLEDITEMLIST_OFFSET UNITYSDK_OFFSET(0xE99F3E0)
#define SUPERSCROLLVIEW_ITEMPOOL_GET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0xE99DD20)
#define SUPERSCROLLVIEW_ITEMPOOL_GET_PREFABRECTCACHE_OFFSET UNITYSDK_OFFSET(0xE99DC30)
#define SUPERSCROLLVIEW_ITEMPOOL_INIT_OFFSET UNITYSDK_OFFSET(0xE99DE20)
#define SUPERSCROLLVIEW_ITEMPOOL_PREPAREITEM_OFFSET UNITYSDK_OFFSET(0xE99E7D0)
#define SUPERSCROLLVIEW_ITEMPOOL_RECYCLEITEMREAL_OFFSET UNITYSDK_OFFSET(0xE99E3C0)
#define SUPERSCROLLVIEW_ITEMPOOL_RECYCLEITEM_OFFSET UNITYSDK_OFFSET(0xE99F1B0)
#define SUPERSCROLLVIEW_ITEMPOOL_SETITEMVISIBLEBYPOS_OFFSET UNITYSDK_OFFSET(0xE99F120)
#define SUPERSCROLLVIEW_ITEMPOOL_SETPREFABLAYER_OFFSET UNITYSDK_OFFSET(0xE99E480)
#define SUPERSCROLLVIEW_ITEMPOOL_SETREDEFINEWH_OFFSET UNITYSDK_OFFSET(0xE99DDB0)
#define SUPERSCROLLVIEW_ITEMPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0xE99DD30)

namespace SuperScrollView
{
	inline static constexpr unsigned int ItemPool_TypeDefinitionIndex = 47660;

	class ItemPool : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_mCurItemIdCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ItemPool_TypeDefinitionIndex)->GetStaticField(0x34D0);
		}
		::System::String* mPrefabName; // 0x10
		::Class_1_A0302E9AE0B8A2B9* mPool; // 0x18
		::System::Collections::Generic::List_1<::SuperScrollView::LoopListViewItem2*>* mTmpPooledItemList; // 0x20
		::System::Collections::Generic::List_1<::SuperScrollView::LoopListViewItem2*>* mPooledItemList; // 0x28
		::RPG::Client::PrefabCache* prefabCache; // 0x30
		::System::Collections::Generic::List_1<::SuperScrollView::LoopListViewItem2*>* mSelectedPooledItemList; // 0x38
		::UnityEngine::RectTransform* mItemParent; // 0x40
		::UnityEngine::RectTransform* prefabRect; // 0x48
		::UnityEngine::GameObject* mPrefabObj; // 0x50
		::System::Single RedefineHeight; // 0x58
		::System::Int32 mInitCreateCount; // 0x5C
		::System::Single mStartPosOffset; // 0x60
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

		::System::Void SetRedefineWH(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_SETREDEFINEWH_OFFSET))(this, a1, a2);
		}

		::System::Void Init(::UnityEngine::GameObject* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::UnityEngine::RectTransform* a5, ::System::Single a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::RectTransform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_INIT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void SetPrefabLayer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_SETPREFABLAYER_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopListViewItem2* FindItem(::System::Int32 a1)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_FINDITEM_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopListViewItem2* GetItem()
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_GETITEM_OFFSET))(this);
		}

		::System::Void prepareItem(::SuperScrollView::LoopListViewItem2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_PREPAREITEM_OFFSET))(this, a1);
		}

		::System::Void DestroyAllItem(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_DESTROYALLITEM_OFFSET))(this, a1, a2);
		}

		::SuperScrollView::LoopListViewItem2* CreateItem()
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_CREATEITEM_OFFSET))(this);
		}

		::System::Void RecycleItemReal(::SuperScrollView::LoopListViewItem2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_RECYCLEITEMREAL_OFFSET))(this, a1);
		}

		::System::Void SetItemVisibleByPos(::SuperScrollView::LoopListViewItem2* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_SETITEMVISIBLEBYPOS_OFFSET))(this, a1, a2);
		}

		::System::Void RecycleItem(::SuperScrollView::LoopListViewItem2* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOOL_RECYCLEITEM_OFFSET))(this, a1, a2);
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
