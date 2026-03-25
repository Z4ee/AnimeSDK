#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SuperScrollView { class LoopStaggeredGridViewItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_CLEARTMPRECYCLEDITEM_OFFSET UNITYSDK_OFFSET(0xAC1B8A0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_CREATEITEM_OFFSET UNITYSDK_OFFSET(0xAC257D0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_DESTROYALLITEM_OFFSET UNITYSDK_OFFSET(0xAC1E5C0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_GETITEM_OFFSET UNITYSDK_OFFSET(0xAC19290)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_INIT_OFFSET UNITYSDK_OFFSET(0xAC1BB70)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_RECYCLEITEMREAL_OFFSET UNITYSDK_OFFSET(0xAC25B00)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_RECYCLEITEM_OFFSET UNITYSDK_OFFSET(0xAC1B5A0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0xAC1BAF0)

namespace SuperScrollView
{
	inline static constexpr unsigned int StaggeredGridItemPool_TypeDefinitionIndex = 38540;

	class StaggeredGridItemPool : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_mCurItemIdCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StaggeredGridItemPool_TypeDefinitionIndex)->GetStaticField(0x3530);
		}
		::System::String* mPrefabName; // 0x10
		::UnityEngine::RectTransform* mItemParent; // 0x18
		::UnityEngine::GameObject* mPrefabObj; // 0x20
		::System::Collections::Generic::List_1<::SuperScrollView::LoopStaggeredGridViewItem*>* mPooledItemList; // 0x28
		::System::Collections::Generic::List_1<::SuperScrollView::LoopStaggeredGridViewItem*>* mTmpPooledItemList; // 0x30
		::System::Single mPadding; // 0x38
		::System::Int32 mInitCreateCount; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL__CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::GameObject* prefabObj, ::System::Single padding, ::System::Int32 createCount, ::UnityEngine::RectTransform* parent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single, ::System::Int32, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_INIT_OFFSET))(this, prefabObj, padding, createCount, parent);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* GetItem()
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_GETITEM_OFFSET))(this);
		}

		::System::Void DestroyAllItem(::System::Boolean im)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_DESTROYALLITEM_OFFSET))(this, im);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* CreateItem()
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_CREATEITEM_OFFSET))(this);
		}

		::System::Void RecycleItemReal(::SuperScrollView::LoopStaggeredGridViewItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_RECYCLEITEMREAL_OFFSET))(this, item);
		}

		::System::Void RecycleItem(::SuperScrollView::LoopStaggeredGridViewItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_RECYCLEITEM_OFFSET))(this, item);
		}

		::System::Void ClearTmpRecycledItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMPOOL_CLEARTMPRECYCLEDITEM_OFFSET))(this);
		}
	};
}
