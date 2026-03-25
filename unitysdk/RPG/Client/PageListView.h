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

#define RPG_CLIENT_PAGELISTVIEW_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x9EC5430)
#define RPG_CLIENT_PAGELISTVIEW_GET_CURRENTPAGEINDEX_OFFSET UNITYSDK_OFFSET(0x9EC5950)
#define RPG_CLIENT_PAGELISTVIEW_GET_PAGENUM_OFFSET UNITYSDK_OFFSET(0x9EC4AF0)
#define RPG_CLIENT_PAGELISTVIEW_MOVETOPAGEBYITEMCHILDNAME_OFFSET UNITYSDK_OFFSET(0x9EC5050)
#define RPG_CLIENT_PAGELISTVIEW_MOVETOPAGE_OFFSET UNITYSDK_OFFSET(0x9EC4F80)
#define RPG_CLIENT_PAGELISTVIEW_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x9EC5330)
#define RPG_CLIENT_PAGELISTVIEW_REFRESHALLPAGES_OFFSET UNITYSDK_OFFSET(0x9EC5290)
#define RPG_CLIENT_PAGELISTVIEW_SAFEINIT_OFFSET UNITYSDK_OFFSET(0x9EC4B00)
#define RPG_CLIENT_PAGELISTVIEW_SETNEARESTCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9EC52E0)
#define RPG_CLIENT_PAGELISTVIEW_SETPAGENUM_OFFSET UNITYSDK_OFFSET(0x9EC4C70)
#define RPG_CLIENT_PAGELISTVIEW__ADDDOTS_OFFSET UNITYSDK_OFFSET(0x9EC5860)
#define RPG_CLIENT_PAGELISTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x9EC5960)
#define RPG_CLIENT_PAGELISTVIEW__GETTARGETSCROLLINDEX_OFFSET UNITYSDK_OFFSET(0x9EC5710)
#define RPG_CLIENT_PAGELISTVIEW__ONDRAGEND_OFFSET UNITYSDK_OFFSET(0x9EC54C0)
#define RPG_CLIENT_PAGELISTVIEW__ONSNAPNEARESTCHANGED_OFFSET UNITYSDK_OFFSET(0x9EC57E0)
#define RPG_CLIENT_PAGELISTVIEW__REFRESHDOTS_OFFSET UNITYSDK_OFFSET(0x9EC4E10)
#define RPG_CLIENT_PAGELISTVIEW___IFIXBASEPROXY_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x9EC59C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PageListView_TypeDefinitionIndex = 59518;

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

		::System::Void SafeInit(::System::Int32 itemTotalCount, ::System::Func_4<::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32, ::SuperScrollView::LoopListViewItem2*>* onGetItemByIndex, ::SuperScrollView::LoopListViewInitParam* initParam, ::XLua::LuaTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_4<::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32, ::SuperScrollView::LoopListViewItem2*>*, ::SuperScrollView::LoopListViewInitParam*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW_SAFEINIT_OFFSET))(this, itemTotalCount, onGetItemByIndex, initParam, table);
		}

		::System::Void SetPageNum(::System::Int32 num)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW_SETPAGENUM_OFFSET))(this, num);
		}

		::System::Void MoveToPage(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW_MOVETOPAGE_OFFSET))(this, index);
		}

		::System::Void MoveToPageByItemChildName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW_MOVETOPAGEBYITEMCHILDNAME_OFFSET))(this, name);
		}

		::System::Void RefreshAllPages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW_REFRESHALLPAGES_OFFSET))(this);
		}

		::System::Void SetNearestChangedCallback(::System::Func_3<::XLua::LuaTable*, ::SuperScrollView::LoopListViewItem2*, ::System::Boolean>* onChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_3<::XLua::LuaTable*, ::SuperScrollView::LoopListViewItem2*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW_SETNEARESTCHANGEDCALLBACK_OFFSET))(this, onChanged);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW_ONSCROLL_OFFSET))(this, data);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW_DESPAWNED_OFFSET))(this);
		}

		::System::Void _OnDragEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW__ONDRAGEND_OFFSET))(this);
		}

		::System::Int32 _GetTargetScrollIndex(::System::Int32 nearestIndex, ::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 velocity)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW__GETTARGETSCROLLINDEX_OFFSET))(this, nearestIndex, pos, velocity);
		}

		::System::Void _OnSnapNearestChanged(::SuperScrollView::LoopListView2* listView, ::SuperScrollView::LoopListViewItem2* item)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListView2*, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW__ONSNAPNEARESTCHANGED_OFFSET))(this, listView, item);
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

		::System::Void __iFixBaseProxy_Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAGELISTVIEW___IFIXBASEPROXY_DESPAWNED_OFFSET))(this);
		}
	};
}
