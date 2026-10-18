#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1503;
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client::MechCraft::View { class MechCraftReportControl; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD651520)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL___C__DISPLAYCLASS17_0___REFRESHCMDLIST_B__0_OFFSET UNITYSDK_OFFSET(0xD651840)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL___C__DISPLAYCLASS17_0___REFRESHCMDLIST_G__ONITEMCHANGE_1_OFFSET UNITYSDK_OFFSET(0xD651850)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftReportControl___c__DisplayClass17_0_TypeDefinitionIndex = 80025;

	class MechCraftReportControl___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1503*>* cmts; // 0x10
		::RPG::Client::MechCraft::View::MechCraftReportControl* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* __RefreshCmdList_b__0(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL___C__DISPLAYCLASS17_0___REFRESHCMDLIST_B__0_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::StaticListViewItem* __RefreshCmdList_g__OnItemChange_1(::System::Int32 a1)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL___C__DISPLAYCLASS17_0___REFRESHCMDLIST_G__ONITEMCHANGE_1_OFFSET))(this, a1);
		}
	};
}
