#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

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

#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_CLEARNAVI_OFFSET UNITYSDK_OFFSET(0xD0A6520)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_GETSHOWNITEMBYITEMINDEX_OFFSET UNITYSDK_OFFSET(0xD0A83F0)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_GETSHOWNITEMBYROWANDCOL_OFFSET UNITYSDK_OFFSET(0xD0A5EE0)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_GETSHOWNITEMBYTYPEANDINDEX_OFFSET UNITYSDK_OFFSET(0xD0A8310)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_INITGRIDVIEW_OFFSET UNITYSDK_OFFSET(0xD0A39D0)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_MOVEPANELTOITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0xD0A7950)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_MOVEPANELTOITEMBYROWCOLUMN_OFFSET UNITYSDK_OFFSET(0xD0A7BC0)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_MOVEPANELTOITEMBYTYPEANDINDEX_OFFSET UNITYSDK_OFFSET(0xD0A8670)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_NEWLISTVIEWITEM_OFFSET UNITYSDK_OFFSET(0xD0A73E0)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_ONANIMATORBUTTONSELECTED_OFFSET UNITYSDK_OFFSET(0xD0A69B0)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD0A8730)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xD0A79E0)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_REFRESHALLSHOWNITEM_OFFSET UNITYSDK_OFFSET(0xD0A7C40)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_ROWITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0xD0A7C90)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_SAFEINITGRIDVIEW_OFFSET UNITYSDK_OFFSET(0xD0A3950)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_SETGRIDITEMS_OFFSET UNITYSDK_OFFSET(0xD0A4860)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0xD0A4390)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__BUILDNAVIHORI_OFFSET UNITYSDK_OFFSET(0xD0A57C0)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__CLEARSTALEFOCUSCACHE_OFFSET UNITYSDK_OFFSET(0xD0A7870)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__CREATEROWPREFAB_OFFSET UNITYSDK_OFFSET(0xD0A3FC0)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xD0A87A0)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__INITCONTENTSIZE_OFFSET UNITYSDK_OFFSET(0xD0A4250)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__ONGETITEMBYROWINDEX_OFFSET UNITYSDK_OFFSET(0xD0A4BC0)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__ONITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0xD0A7E70)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__PROCESSITEMPIVOT_OFFSET UNITYSDK_OFFSET(0xD0A71F0)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__TRYGETDOWNNAVI_OFFSET UNITYSDK_OFFSET(0xD0A6300)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__TRYGETUPNAVI_OFFSET UNITYSDK_OFFSET(0xD0A60E0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopFlexibleGridView_TypeDefinitionIndex = 44934;

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
		::System::Int32 focusedIndex; // 0x94
		::System::Int32 waitingIndex; // 0x98
		::System::Int32 focusedInstanceID; // 0x9C
		::System::Int32 focusedFrameCount; // 0xA0
		::System::String* focusedPrefabName; // 0xA8
		::UnityEngine::GameObject* _RowPrefabGo; // 0xB0
		::System::Int32 _pendingGridItemIndex; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__CTOR_OFFSET))(this);
		}

		::System::Void SafeInitGridView(::System::Func_4<::XLua::LuaTable*, ::SuperScrollView::LoopFlexibleGridView*, ::System::Int32, ::SuperScrollView::LoopFlexibleGridViewItem*>* a1, ::XLua::LuaTable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_4<::XLua::LuaTable*, ::SuperScrollView::LoopFlexibleGridView*, ::System::Int32, ::SuperScrollView::LoopFlexibleGridViewItem*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_SAFEINITGRIDVIEW_OFFSET))(this, a1, a2);
		}

		::System::Void InitGridView(::System::Func_4<::XLua::LuaTable*, ::SuperScrollView::LoopFlexibleGridView*, ::System::Int32, ::SuperScrollView::LoopFlexibleGridViewItem*>* a1, ::XLua::LuaTable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_4<::XLua::LuaTable*, ::SuperScrollView::LoopFlexibleGridView*, ::System::Int32, ::SuperScrollView::LoopFlexibleGridViewItem*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_INITGRIDVIEW_OFFSET))(this, a1, a2);
		}

		::System::Void _InitContentSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__INITCONTENTSIZE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_UPDATE_OFFSET))(this);
		}

		::System::Void SetGridItems(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_SETGRIDITEMS_OFFSET))(this, a1, a2);
		}

		::SuperScrollView::LoopListViewItem2* _OnGetItemByRowIndex(::XLua::LuaTable* a1, ::SuperScrollView::LoopListView2* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__ONGETITEMBYROWINDEX_OFFSET))(this, a1, a2, a3);
		}

		::SuperScrollView::LoopFlexibleGridViewItem* GetShownItemByRowAndCol(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_GETSHOWNITEMBYROWANDCOL_OFFSET))(this, a1, a2);
		}

		::System::Boolean _TryGetUpNavi(::SuperScrollView::LoopFlexibleGridViewItem* a1, ::SuperScrollView::LoopFlexibleGridViewItem*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::SuperScrollView::LoopFlexibleGridViewItem*, ::SuperScrollView::LoopFlexibleGridViewItem*&))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__TRYGETUPNAVI_OFFSET))(this, a1, a2);
		}

		::System::Boolean _TryGetDownNavi(::SuperScrollView::LoopFlexibleGridViewItem* a1, ::SuperScrollView::LoopFlexibleGridViewItem*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::SuperScrollView::LoopFlexibleGridViewItem*, ::SuperScrollView::LoopFlexibleGridViewItem*&))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__TRYGETDOWNNAVI_OFFSET))(this, a1, a2);
		}

		::System::Void _BuildNaviHori(::SuperScrollView::LoopFlexibleGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopFlexibleGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__BUILDNAVIHORI_OFFSET))(this, a1);
		}

		::System::Void ClearNavi(::SuperScrollView::LoopFlexibleGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopFlexibleGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_CLEARNAVI_OFFSET))(this, a1);
		}

		::System::Void OnAnimatorButtonSelected(::RPG::Client::AnimatorButton* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_ONANIMATORBUTTONSELECTED_OFFSET))(this, a1);
		}

		::System::Void _ProcessItemPivot(::SuperScrollView::LoopFlexibleGridViewItem* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopFlexibleGridViewItem*, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__PROCESSITEMPIVOT_OFFSET))(this, a1, a2);
		}

		::SuperScrollView::LoopFlexibleGridViewItem* NewListViewItem(::System::Int32 a1)
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_NEWLISTVIEWITEM_OFFSET))(this, a1);
		}

		::System::Void _ClearStaleFocusCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__CLEARSTALEFOCUSCACHE_OFFSET))(this);
		}

		::System::Void MovePanelToItemByIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_MOVEPANELTOITEMBYINDEX_OFFSET))(this, a1);
		}

		::System::Void PlayFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_PLAYFADEIN_OFFSET))(this);
		}

		::System::Void MovePanelToItemByRowColumn(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_MOVEPANELTOITEMBYROWCOLUMN_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshAllShownItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_REFRESHALLSHOWNITEM_OFFSET))(this);
		}

		::System::Void RowItemRecycle(::SuperScrollView::LoopListViewItem2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_ROWITEMRECYCLE_OFFSET))(this, a1);
		}

		::System::Void _OnItemRecycle(::SuperScrollView::LoopFlexibleGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopFlexibleGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW__ONITEMRECYCLE_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopFlexibleGridViewItem* GetShownItemByTypeAndIndex(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_GETSHOWNITEMBYTYPEANDINDEX_OFFSET))(this, a1, a2);
		}

		::SuperScrollView::LoopFlexibleGridViewItem* GetShownItemByItemIndex(::System::Int32 a1)
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_GETSHOWNITEMBYITEMINDEX_OFFSET))(this, a1);
		}

		::System::Void MovePanelToItemByTypeAndIndex(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW_MOVEPANELTOITEMBYTYPEANDINDEX_OFFSET))(this, a1, a2);
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
