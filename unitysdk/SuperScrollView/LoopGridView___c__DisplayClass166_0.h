#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SuperScrollView { class LoopGridView; }
namespace SuperScrollView { class LoopGridViewItem; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace XLua { class LuaTable; }

#define SUPERSCROLLVIEW_LOOPGRIDVIEW___C__DISPLAYCLASS166_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE95B710)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW___C__DISPLAYCLASS166_0__SAFEINITGRIDVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xE95DA10)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopGridView___c__DisplayClass166_0_TypeDefinitionIndex = 48116;

	class LoopGridView___c__DisplayClass166_0 : public ::System::Object
	{
	public:
		::System::Func_5<::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32, ::SuperScrollView::LoopGridViewItem*>* onGetItemByRowColumn; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW___C__DISPLAYCLASS166_0__CTOR_OFFSET))(this);
		}

		::SuperScrollView::LoopGridViewItem* _SafeInitGridView_b__0(::XLua::LuaTable* a1, ::SuperScrollView::LoopGridView* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW___C__DISPLAYCLASS166_0__SAFEINITGRIDVIEW_B__0_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
