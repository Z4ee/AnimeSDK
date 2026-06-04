#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_5F4D64A4B97E38F9;
class Class_1_90889A2023AB884E_5;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client::LimaoNews { class LimaoNewsInterviewDetailViewModel; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ScrollRect; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD81DA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW_ONCONTENTITEMCHANGE_OFFSET UNITYSDK_OFFSET(0xBD830A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW_ONTABITEMCHANGE_OFFSET UNITYSDK_OFFSET(0xBD82F00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xBD80B90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__GETCENTERITEMINDEX_OFFSET UNITYSDK_OFFSET(0xBD821D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__GETTABITEMINDEXBYCONTENTITEMINDEX_OFFSET UNITYSDK_OFFSET(0xBD82270)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ISCENTERCONTENTITEM_OFFSET UNITYSDK_OFFSET(0xBD82320)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD814B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONCONTENTSCROLL_OFFSET UNITYSDK_OFFSET(0xBD81FC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xBD824B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD80CC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONLIMAONEWSCLOSEINTERVIEWDETAIL_OFFSET UNITYSDK_OFFSET(0xBD82970)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONLIMAONEWSINTERVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0xBD827F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONLIMAONEWSINTERVIEWUPVOTE_OFFSET UNITYSDK_OFFSET(0xBD82B20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONTICK_OFFSET UNITYSDK_OFFSET(0xBD81E30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__SETCONTENTBGHEIGHT_OFFSET UNITYSDK_OFFSET(0xBD81E80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__SUBSCRIBEMESSAGE_OFFSET UNITYSDK_OFFSET(0xBD82730)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD832E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xBD833A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD83280)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xBD83340)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInterviewDetailWindow_TypeDefinitionIndex = 73819;

	class LimaoNewsInterviewDetailWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::AnimatorButton* _BtnClose; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* _ItemHeights; // 0x48
		::UnityEngine::RectTransform* _NodeContentBg; // 0x50
		::UnityEngine::UI::ScrollRect* _ScrollRectContent; // 0x58
		::SuperScrollView::LoopListView2* _LoopListTab; // 0x60
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x68
		::RPG::Client::AnimatorButton* _BtnEmptyClose; // 0x70
		::RPG::UINavigation::UINavigationZone* _NavigationZone; // 0x78
		::SuperScrollView::LoopListView2* _LoopListContent; // 0x80
		::UnityEngine::RectTransform* _NodeLoopListContent; // 0x88
		::UnityEngine::RectTransform* _NodeViewport; // 0x90
		::System::Single _CommentPosition; // 0x98

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsInterviewDetailViewModel* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsInterviewDetailViewModel*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONTICK_OFFSET))(this);
		}

		::System::Void _OnContentScroll(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONCONTENTSCROLL_OFFSET))(this, a1);
		}

		::System::Int32 _GetTabItemIndexByContentItemIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__GETTABITEMINDEXBYCONTENTITEMINDEX_OFFSET))(this, a1);
		}

		::System::Int32 _GetCenterItemIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__GETCENTERITEMINDEX_OFFSET))(this);
		}

		::System::Boolean _IsCenterContentItem(::SuperScrollView::LoopListViewItem2* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ISCENTERCONTENTITEM_OFFSET))(this, a1);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _SubscribeMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__SUBSCRIBEMESSAGE_OFFSET))(this);
		}

		::System::Void _OnLimaoNewsInterviewMessage(::Class_1_90889A2023AB884E_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_90889A2023AB884E_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONLIMAONEWSINTERVIEWMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsCloseInterviewDetail(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONLIMAONEWSCLOSEINTERVIEWDETAIL_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsInterviewUpvote(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__ONLIMAONEWSINTERVIEWUPVOTE_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopListViewItem2* OnTabItemChange(::XLua::LuaTable* a1, ::SuperScrollView::LoopListView2* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW_ONTABITEMCHANGE_OFFSET))(this, a1, a2, a3);
		}

		::SuperScrollView::LoopListViewItem2* OnContentItemChange(::XLua::LuaTable* a1, ::SuperScrollView::LoopListView2* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW_ONCONTENTITEMCHANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetContentBgHeight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW__SETCONTENTBGHEIGHT_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsInterviewDetailViewModel* get__ViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsInterviewDetailViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW___IFIXBASEPROXY__ONTICK_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
		}
	};
}
