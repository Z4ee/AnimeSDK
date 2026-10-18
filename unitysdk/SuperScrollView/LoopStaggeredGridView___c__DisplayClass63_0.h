#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SuperScrollView { class LoopStaggeredGridView; }
namespace SuperScrollView { class LoopStaggeredGridViewItem; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace XLua { class LuaTable; }

#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE9D37E0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW___C__DISPLAYCLASS63_0__SAFEINITGRIDVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xE9D98E0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopStaggeredGridView___c__DisplayClass63_0_TypeDefinitionIndex = 47678;

	class LoopStaggeredGridView___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::System::Func_3<::SuperScrollView::LoopStaggeredGridView*, ::System::Int32, ::SuperScrollView::LoopStaggeredGridViewItem*>* onGetItemByItemIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* _SafeInitGridView_b__0(::XLua::LuaTable* a1, ::SuperScrollView::LoopStaggeredGridView* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopStaggeredGridView*, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW___C__DISPLAYCLASS63_0__SAFEINITGRIDVIEW_B__0_OFFSET))(this, a1, a2, a3);
		}
	};
}
