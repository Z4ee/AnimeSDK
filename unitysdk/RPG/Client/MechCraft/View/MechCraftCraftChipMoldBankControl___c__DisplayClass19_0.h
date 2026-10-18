#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_37C86F8E7774C578;
namespace RPG::Client::MechCraft::View { class MechCraftCraftChipMoldBankControl; }
namespace SuperScrollView { class LoopGridView; }
namespace SuperScrollView { class LoopGridViewItem; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDBANKCONTROL___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD604EF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDBANKCONTROL___C__DISPLAYCLASS19_0___REFRESHMOLDS_B__0_OFFSET UNITYSDK_OFFSET(0xD605450)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftChipMoldBankControl___c__DisplayClass19_0_TypeDefinitionIndex = 79855;

	class MechCraftCraftChipMoldBankControl___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftCraftChipMoldBankControl* __4__this; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::Class_1_37C86F8E7774C578*>* molds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDBANKCONTROL___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::SuperScrollView::LoopGridViewItem* __RefreshMolds_b__0(::XLua::LuaTable* a1, ::SuperScrollView::LoopGridView* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDBANKCONTROL___C__DISPLAYCLASS19_0___REFRESHMOLDS_B__0_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
