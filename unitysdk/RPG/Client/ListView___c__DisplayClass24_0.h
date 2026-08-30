#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace SuperScrollView { class LoopGridView; }
namespace SuperScrollView { class LoopGridViewItem; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD4A5040)
#define RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS24_0__INIT_B__0_OFFSET UNITYSDK_OFFSET(0xD4A6B00)
#define RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS24_0__INIT_B__1_OFFSET UNITYSDK_OFFSET(0xD4A6BD0)
#define RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS24_0__INIT_B__2_OFFSET UNITYSDK_OFFSET(0xD4A6C70)
#define RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS24_0__INIT_B__3_OFFSET UNITYSDK_OFFSET(0xD4A6CC0)
#define RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS24_0__INIT_B__4_OFFSET UNITYSDK_OFFSET(0xD4A6D60)

namespace RPG::Client
{
	inline static constexpr unsigned int ListView___c__DisplayClass24_0_TypeDefinitionIndex = 72487;

	class ListView___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::GameObject*>* onItemRecycle; // 0x10
		::System::Func_2<::System::Int32, ::UnityEngine::GameObject*>* onGetItemByIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* _Init_b__0(::RPG::Client::StaticListView* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS24_0__INIT_B__0_OFFSET))(this, a1, a2);
		}

		::SuperScrollView::LoopListViewItem2* _Init_b__1(::SuperScrollView::LoopListView2* a1, ::System::Int32 a2)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS24_0__INIT_B__1_OFFSET))(this, a1, a2);
		}

		::System::Void _Init_b__2(::SuperScrollView::LoopListViewItem2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS24_0__INIT_B__2_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopGridViewItem* _Init_b__3(::SuperScrollView::LoopGridView* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS24_0__INIT_B__3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _Init_b__4(::SuperScrollView::LoopGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW___C__DISPLAYCLASS24_0__INIT_B__4_OFFSET))(this, a1);
		}
	};
}
