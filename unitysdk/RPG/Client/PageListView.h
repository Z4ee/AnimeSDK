#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SuperScrollView/LoopListView2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class PageListDotItem; }
namespace SuperScrollView { class LoopListViewInitParam; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_PAGELISTVIEW_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1C4D2A40)
#define RPG_CLIENT_PAGELISTVIEW_GET_CURRENTPAGEINDEX_OFFSET UNITYSDK_OFFSET(0x1C4D3020)
#define RPG_CLIENT_PAGELISTVIEW_GET_PAGENUM_OFFSET UNITYSDK_OFFSET(0x1C4D1FE0)
#define RPG_CLIENT_PAGELISTVIEW_MOVETOPAGEBYITEMCHILDNAME_OFFSET UNITYSDK_OFFSET(0x1C4D2660)
#define RPG_CLIENT_PAGELISTVIEW_MOVETOPAGE_OFFSET UNITYSDK_OFFSET(0x1C4D2590)
#define RPG_CLIENT_PAGELISTVIEW_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x1C4D2940)
#define RPG_CLIENT_PAGELISTVIEW_REFRESHALLPAGES_OFFSET UNITYSDK_OFFSET(0x1C4D28A0)
#define RPG_CLIENT_PAGELISTVIEW_SAFEINIT_OFFSET UNITYSDK_OFFSET(0x1C4D2030)
#define RPG_CLIENT_PAGELISTVIEW_SETNEARESTCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C4D28F0)
#define RPG_CLIENT_PAGELISTVIEW_SETPAGENUM_OFFSET UNITYSDK_OFFSET(0x1C4D21E0)
#define RPG_CLIENT_PAGELISTVIEW__ADDDOTS_OFFSET UNITYSDK_OFFSET(0x1C4D2E70)
#define RPG_CLIENT_PAGELISTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4D3070)
#define RPG_CLIENT_PAGELISTVIEW__GETTARGETSCROLLINDEX_OFFSET UNITYSDK_OFFSET(0x1C4D2D20)
#define RPG_CLIENT_PAGELISTVIEW__ONDRAGEND_OFFSET UNITYSDK_OFFSET(0x1C4D2AD0)
#define RPG_CLIENT_PAGELISTVIEW__ONSNAPNEARESTCHANGED_OFFSET UNITYSDK_OFFSET(0x1C4D2DF0)
#define RPG_CLIENT_PAGELISTVIEW__REFRESHDOTS_OFFSET UNITYSDK_OFFSET(0x1C4D2380)

namespace RPG::Client
{
	inline static constexpr unsigned int PageListView_TypeDefinitionIndex = 72547;

	class PageListView : public ::SuperScrollView::LoopListView2
	{
	public:
		::System::Single SpeedDeadzone; // 0x2F8
		::System::Boolean AutoDisableScroll; // 0x2FC
		::UnityEngine::GameObject* DotsGroup; // 0x300
		::RPG::Client::PageListDotItem* DotPrefab; // 0x308
		::System::Boolean AutoHideDots; // 0x310
		::System::Collections::Generic::List_1<::RPG::Client::PageListDotItem*>* _Dots; // 0x318
		::System::Int32 _PageNum; // 0x320
		::System::Func_3<::XLua::LuaTable*, ::SuperScrollView::LoopListViewItem2*, ::System::Boolean>* _OnChangeCurrentPage; // 0x328
		::XLua::LuaTable* _LuaTable; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW__CTOR_OFFSET))(this);
		}

		::System::Int32 get_PageNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW_GET_PAGENUM_OFFSET))(this);
		}

		::System::Void SafeInit(::System::Int32 a1, ::System::Func_4<::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32, ::SuperScrollView::LoopListViewItem2*>* a2, ::SuperScrollView::LoopListViewInitParam* a3, ::XLua::LuaTable* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_4<::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32, ::SuperScrollView::LoopListViewItem2*>*, ::SuperScrollView::LoopListViewInitParam*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW_SAFEINIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetPageNum(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW_SETPAGENUM_OFFSET))(this, a1);
		}

		::System::Void MoveToPage(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW_MOVETOPAGE_OFFSET))(this, a1);
		}

		::System::Void MoveToPageByItemChildName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW_MOVETOPAGEBYITEMCHILDNAME_OFFSET))(this, a1);
		}

		::System::Void RefreshAllPages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW_REFRESHALLPAGES_OFFSET))(this);
		}

		::System::Void SetNearestChangedCallback(::System::Func_3<::XLua::LuaTable*, ::SuperScrollView::LoopListViewItem2*, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_3<::XLua::LuaTable*, ::SuperScrollView::LoopListViewItem2*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW_SETNEARESTCHANGEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW_ONSCROLL_OFFSET))(this, a1);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW_DESPAWNED_OFFSET))(this);
		}

		::System::Void _OnDragEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW__ONDRAGEND_OFFSET))(this);
		}

		::System::Int32 _GetTargetScrollIndex(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW__GETTARGETSCROLLINDEX_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnSnapNearestChanged(::SuperScrollView::LoopListView2* a1, ::SuperScrollView::LoopListViewItem2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListView2*, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW__ONSNAPNEARESTCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshDots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW__REFRESHDOTS_OFFSET))(this);
		}

		::System::Void _AddDots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW__ADDDOTS_OFFSET))(this);
		}

		::System::Int32 get_CurrentPageIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW_GET_CURRENTPAGEINDEX_OFFSET))(this);
		}
	};
}
