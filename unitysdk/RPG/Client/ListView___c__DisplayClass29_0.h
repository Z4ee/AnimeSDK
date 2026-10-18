#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace SuperScrollView { class LoopFlexibleGridView; }
namespace SuperScrollView { class LoopFlexibleGridViewItem; }
namespace SuperScrollView { class LoopGridView; }
namespace SuperScrollView { class LoopGridViewItem; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace SuperScrollView { class LoopStaggeredGridView; }
namespace SuperScrollView { class LoopStaggeredGridViewItem; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD3F2060)
#define RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS29_0__INIT_B__0_OFFSET UNITYSDK_OFFSET(0xD3F51A0)
#define RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS29_0__INIT_B__1_OFFSET UNITYSDK_OFFSET(0xD3F5270)
#define RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS29_0__INIT_B__2_OFFSET UNITYSDK_OFFSET(0xD3F5310)
#define RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS29_0__INIT_B__3_OFFSET UNITYSDK_OFFSET(0xD3F5360)
#define RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS29_0__INIT_B__4_OFFSET UNITYSDK_OFFSET(0xD3F5400)
#define RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS29_0__INIT_B__5_OFFSET UNITYSDK_OFFSET(0xD3F5450)
#define RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS29_0__INIT_B__6_OFFSET UNITYSDK_OFFSET(0xD3F5520)
#define RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS29_0__INIT_B__7_OFFSET UNITYSDK_OFFSET(0xD3F5570)
#define RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS29_0__INIT_B__8_OFFSET UNITYSDK_OFFSET(0xD3F5640)

namespace RPG::Client
{
	inline static constexpr unsigned int ListView___c__DisplayClass29_0_TypeDefinitionIndex = 72559;

	class ListView___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::Func_2<::System::Int32, ::UnityEngine::GameObject*>* onGetItemByIndex; // 0x10
		::System::Action_1<::UnityEngine::GameObject*>* onItemRecycle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* _Init_b__0(::RPG::Client::StaticListView* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS29_0__INIT_B__0_OFFSET))(this, a1, a2);
		}

		::SuperScrollView::LoopListViewItem2* _Init_b__1(::SuperScrollView::LoopListView2* a1, ::System::Int32 a2)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS29_0__INIT_B__1_OFFSET))(this, a1, a2);
		}

		::System::Void _Init_b__2(::SuperScrollView::LoopListViewItem2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS29_0__INIT_B__2_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopGridViewItem* _Init_b__3(::SuperScrollView::LoopGridView* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS29_0__INIT_B__3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _Init_b__4(::SuperScrollView::LoopGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS29_0__INIT_B__4_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* _Init_b__5(::SuperScrollView::LoopStaggeredGridView* a1, ::System::Int32 a2)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS29_0__INIT_B__5_OFFSET))(this, a1, a2);
		}

		::System::Void _Init_b__6(::SuperScrollView::LoopStaggeredGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridViewItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS29_0__INIT_B__6_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopFlexibleGridViewItem* _Init_b__7(::XLua::LuaTable* a1, ::SuperScrollView::LoopFlexibleGridView* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopFlexibleGridView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS29_0__INIT_B__7_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _Init_b__8(::SuperScrollView::LoopFlexibleGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopFlexibleGridViewItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS29_0__INIT_B__8_OFFSET))(this, a1);
		}
	};
}
