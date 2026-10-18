#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E64C5E78139B800A;
namespace RPG::Client::MechCraft::View { class MechCraftOrderListControl; }
namespace SuperScrollView { class LoopGridView; }
namespace SuperScrollView { class LoopGridViewItem; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD645850)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL___C__DISPLAYCLASS6_0___REFRESH_B__0_OFFSET UNITYSDK_OFFSET(0xD645C90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL___C__DISPLAYCLASS6_0___REFRESH_B__1_OFFSET UNITYSDK_OFFSET(0xD645DF0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderListControl___c__DisplayClass6_0_TypeDefinitionIndex = 80017;

	class MechCraftOrderListControl___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftOrderListControl* __4__this; // 0x10
		::Class_1_E64C5E78139B800A* vm; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::SuperScrollView::LoopGridViewItem* __Refresh_b__0(::XLua::LuaTable* a1, ::SuperScrollView::LoopGridView* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL___C__DISPLAYCLASS6_0___REFRESH_B__0_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void __Refresh_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL___C__DISPLAYCLASS6_0___REFRESH_B__1_OFFSET))(this);
		}
	};
}
