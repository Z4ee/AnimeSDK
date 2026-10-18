#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentDetailControl; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentDetailViewModel; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD65F7D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL___C__DISPLAYCLASS20_0___REFRESHCONTENT_B__0_OFFSET UNITYSDK_OFFSET(0xD660200)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL___C__DISPLAYCLASS20_0___REFRESHCONTENT_B__1_OFFSET UNITYSDK_OFFSET(0xD660350)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentDetailControl___c__DisplayClass20_0_TypeDefinitionIndex = 80064;

	class MechCraftTalentDetailControl___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftTalentDetailControl* __4__this; // 0x10
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* vm; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void __RefreshContent_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL___C__DISPLAYCLASS20_0___REFRESHCONTENT_B__0_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* __RefreshContent_b__1(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL___C__DISPLAYCLASS20_0___REFRESHCONTENT_B__1_OFFSET))(this, a1, a2, a3);
		}
	};
}
