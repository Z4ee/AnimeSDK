#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace XLua { class LuaTable; }

#define SUPERSCROLLVIEW_LOOPLISTVIEW2___C__DISPLAYCLASS221_0__CTOR_OFFSET UNITYSDK_OFFSET(0x104DC6F0)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2___C__DISPLAYCLASS221_0__SAFEINITLISTVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x104E1EC0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListView2___c__DisplayClass221_0_TypeDefinitionIndex = 48127;

	class LoopListView2___c__DisplayClass221_0 : public ::System::Object
	{
	public:
		::System::Func_3<::SuperScrollView::LoopListView2*, ::System::Int32, ::SuperScrollView::LoopListViewItem2*>* onGetItemByIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2___C__DISPLAYCLASS221_0__CTOR_OFFSET))(this);
		}

		::SuperScrollView::LoopListViewItem2* _SafeInitListView_b__0(::XLua::LuaTable* a1, ::SuperScrollView::LoopListView2* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2___C__DISPLAYCLASS221_0__SAFEINITLISTVIEW_B__0_OFFSET))(this, a1, a2, a3);
		}
	};
}
