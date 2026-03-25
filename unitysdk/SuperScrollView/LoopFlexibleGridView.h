#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class AnimatorButton; }
namespace SuperScrollView { class FlexibleGridConfData; }
namespace SuperScrollView { class FlexibleGridItemPool; }
namespace SuperScrollView { class GridPosMgr; }
namespace SuperScrollView { class LoopFlexibleGridViewItem; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace XLua { class LuaTable; }

#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_CLEARNAVI_OFFSET UNITYSDK_OFFSET(0xABE9C70)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_GETSHOWNITEMBYITEMINDEX_OFFSET UNITYSDK_OFFSET(0xABEAE00)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_GETSHOWNITEMBYROWANDCOL_OFFSET UNITYSDK_OFFSET(0xABE9600)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_GETSHOWNITEMBYTYPEANDINDEX_OFFSET UNITYSDK_OFFSET(0xABEAD50)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_INITGRIDVIEW_OFFSET UNITYSDK_OFFSET(0xABE7E20)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_MOVEPANELTOITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0xABEA570)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_MOVEPANELTOITEMBYROWCOLUMN_OFFSET UNITYSDK_OFFSET(0xABEA650)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_MOVEPANELTOITEMBYTYPEANDINDEX_OFFSET UNITYSDK_OFFSET(0xABEAF80)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_NEWLISTVIEWITEM_OFFSET UNITYSDK_OFFSET(0xABEA1E0)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_ONANIMATORBUTTONSELECTED_OFFSET UNITYSDK_OFFSET(0xABE9F30)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xABEB020)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xABEA600)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_REFRESHALLSHOWNITEM_OFFSET UNITYSDK_OFFSET(0xABEA6D0)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_ROWITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0xABEA720)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_SETGRIDITEMS_OFFSET UNITYSDK_OFFSET(0xABE8710)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0xABE8590)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__BUILDNAVIHORI_OFFSET UNITYSDK_OFFSET(0xABE8F70)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__CREATEROWPREFAB_OFFSET UNITYSDK_OFFSET(0xABE8280)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xABEB090)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__INITCONTENTSIZE_OFFSET UNITYSDK_OFFSET(0xABE8450)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__ONGETITEMBYROWINDEX_OFFSET UNITYSDK_OFFSET(0xABE8980)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__ONITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0xABEA900)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__PROCESSITEMPIVOT_OFFSET UNITYSDK_OFFSET(0xABE9FE0)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__TRYGETDOWNNAVI_OFFSET UNITYSDK_OFFSET(0xABE9A30)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__TRYGETUPNAVI_OFFSET UNITYSDK_OFFSET(0xABE97F0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopFlexibleGridView_TypeDefinitionIndex = 38506;

	class LoopFlexibleGridView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::SuperScrollView::LoopListView2* _ListView; // 0x18
		::System::Collections::Generic::List_1<::SuperScrollView::FlexibleGridConfData*>* _PrefabConfDataList; // 0x20
		::System::Single _RowSpacing; // 0x28
		::System::Single _ColumnSpacing; // 0x2C
		::System::Single _LeftPadding; // 0x30
		::System::Single _RightPadding; // 0x34
		::System::Single _TopPadding; // 0x38
		::System::Single _DownPadding; // 0x3C
		::System::Single _GroupSpacing; // 0x40
		::System::Single _ContentWidth; // 0x44
		::System::Func_4<::XLua::LuaTable*, ::SuperScrollView::LoopFlexibleGridView*, ::System::Int32, ::SuperScrollView::LoopFlexibleGridViewItem*>* _OnGetItemByIndex; // 0x48
		::XLua::LuaTable* _LuaObj; // 0x50
		::UnityEngine::RectTransform* _CurRowTf; // 0x58
		::SuperScrollView::GridPosMgr* _GridPosMgr; // 0x60
		::System::Collections::Generic::List_1<::SuperScrollView::FlexibleGridItemPool*>* _ItemPools; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::SuperScrollView::FlexibleGridItemPool*>* _ItemPoolsByName; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Tuple_2<::System::Int32, ::System::Int32>*, ::SuperScrollView::LoopFlexibleGridViewItem*>* _RowColNaviMap; // 0x78
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* _ItemIndexByItemType; // 0x80
		::System::Collections::Generic::List_1<::System::Int32>* _TypeList; // 0x88
		::System::Boolean cachedFocused; // 0x90
		::UnityEngine::Vector2Int focusedRowColumn; // 0x94
		::System::Int32 focusedIndex; // 0x9C
		::System::Int32 waitingIndex; // 0xA0
		::System::Int32 focusedInstanceID; // 0xA4
		::System::Int32 focusedFrameCount; // 0xA8
		::UnityEngine::GameObject* _RowPrefabGo; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__CTOR_OFFSET))(this);
		}

		::System::Void InitGridView(::System::Func_4<::XLua::LuaTable*, ::SuperScrollView::LoopFlexibleGridView*, ::System::Int32, ::SuperScrollView::LoopFlexibleGridViewItem*>* onGetItemByIndex, ::XLua::LuaTable* luaObj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_4<::XLua::LuaTable*, ::SuperScrollView::LoopFlexibleGridView*, ::System::Int32, ::SuperScrollView::LoopFlexibleGridViewItem*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_INITGRIDVIEW_OFFSET))(this, onGetItemByIndex, luaObj);
		}

		::System::Void _InitContentSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__INITCONTENTSIZE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_UPDATE_OFFSET))(this);
		}

		::System::Void SetGridItems(::System::Collections::Generic::List_1<::System::Int32>* typeList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_SETGRIDITEMS_OFFSET))(this, typeList);
		}

		::SuperScrollView::LoopListViewItem2* _OnGetItemByRowIndex(::XLua::LuaTable* luaTable, ::SuperScrollView::LoopListView2* listView, ::System::Int32 rowIndex)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__ONGETITEMBYROWINDEX_OFFSET))(this, luaTable, listView, rowIndex);
		}

		::SuperScrollView::LoopFlexibleGridViewItem* GetShownItemByRowAndCol(::System::Int32 row, ::System::Int32 col)
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_GETSHOWNITEMBYROWANDCOL_OFFSET))(this, row, col);
		}

		::System::Boolean _TryGetUpNavi(::SuperScrollView::LoopFlexibleGridViewItem* item, ::SuperScrollView::LoopFlexibleGridViewItem*& upItem)
		{
			return ((::System::Boolean(*)(::PVOID, ::SuperScrollView::LoopFlexibleGridViewItem*, ::SuperScrollView::LoopFlexibleGridViewItem*&))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__TRYGETUPNAVI_OFFSET))(this, item, upItem);
		}

		::System::Boolean _TryGetDownNavi(::SuperScrollView::LoopFlexibleGridViewItem* item, ::SuperScrollView::LoopFlexibleGridViewItem*& downItem)
		{
			return ((::System::Boolean(*)(::PVOID, ::SuperScrollView::LoopFlexibleGridViewItem*, ::SuperScrollView::LoopFlexibleGridViewItem*&))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__TRYGETDOWNNAVI_OFFSET))(this, item, downItem);
		}

		::System::Void _BuildNaviHori(::SuperScrollView::LoopFlexibleGridViewItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopFlexibleGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__BUILDNAVIHORI_OFFSET))(this, item);
		}

		::System::Void ClearNavi(::SuperScrollView::LoopFlexibleGridViewItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopFlexibleGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_CLEARNAVI_OFFSET))(this, item);
		}

		::System::Void OnAnimatorButtonSelected(::RPG::Client::AnimatorButton* button)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_ONANIMATORBUTTONSELECTED_OFFSET))(this, button);
		}

		::System::Void _ProcessItemPivot(::SuperScrollView::LoopFlexibleGridViewItem* item, ::System::Int32 prefabIndex)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopFlexibleGridViewItem*, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__PROCESSITEMPIVOT_OFFSET))(this, item, prefabIndex);
		}

		::SuperScrollView::LoopFlexibleGridViewItem* NewListViewItem(::System::Int32 itemPrefabIndex)
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_NEWLISTVIEWITEM_OFFSET))(this, itemPrefabIndex);
		}

		::System::Void MovePanelToItemByIndex(::System::Int32 itemIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_MOVEPANELTOITEMBYINDEX_OFFSET))(this, itemIndex);
		}

		::System::Void PlayFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_PLAYFADEIN_OFFSET))(this);
		}

		::System::Void MovePanelToItemByRowColumn(::System::Int32 row, ::System::Int32 column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_MOVEPANELTOITEMBYROWCOLUMN_OFFSET))(this, row, column);
		}

		::System::Void RefreshAllShownItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_REFRESHALLSHOWNITEM_OFFSET))(this);
		}

		::System::Void RowItemRecycle(::SuperScrollView::LoopListViewItem2* rowItem)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_ROWITEMRECYCLE_OFFSET))(this, rowItem);
		}

		::System::Void _OnItemRecycle(::SuperScrollView::LoopFlexibleGridViewItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopFlexibleGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__ONITEMRECYCLE_OFFSET))(this, item);
		}

		::SuperScrollView::LoopFlexibleGridViewItem* GetShownItemByTypeAndIndex(::System::Int32 typeIndex, ::System::Int32 index)
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_GETSHOWNITEMBYTYPEANDINDEX_OFFSET))(this, typeIndex, index);
		}

		::SuperScrollView::LoopFlexibleGridViewItem* GetShownItemByItemIndex(::System::Int32 index)
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_GETSHOWNITEMBYITEMINDEX_OFFSET))(this, index);
		}

		::System::Void MovePanelToItemByTypeAndIndex(::System::Int32 itemType, ::System::Int32 indexInType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_MOVEPANELTOITEMBYTYPEANDINDEX_OFFSET))(this, itemType, indexInType);
		}

		::UnityEngine::GameObject* _CreateRowPrefab()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__CREATEROWPREFAB_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_ONDESTROY_OFFSET))(this);
		}
	};
}
