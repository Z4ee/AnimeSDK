#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1503;
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client::MechCraft::View { class MechCraftReportCmtControl; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD65A2D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL___C__DISPLAYCLASS10_0___REFRESHREPLYLIST_B__0_OFFSET UNITYSDK_OFFSET(0xD65A2F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL___C__DISPLAYCLASS10_0___REFRESHREPLYLIST_G__ONITEMCHANGE_1_OFFSET UNITYSDK_OFFSET(0xD65A300)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftReportCmtControl___c__DisplayClass10_0_TypeDefinitionIndex = 80023;

	class MechCraftReportCmtControl___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1503*>* cmts; // 0x10
		::RPG::Client::MechCraft::View::MechCraftReportCmtControl* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* __RefreshReplyList_b__0(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL___C__DISPLAYCLASS10_0___REFRESHREPLYLIST_B__0_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::StaticListViewItem* __RefreshReplyList_g__OnItemChange_1(::System::Int32 a1)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL___C__DISPLAYCLASS10_0___REFRESHREPLYLIST_G__ONITEMCHANGE_1_OFFSET))(this, a1);
		}
	};
}
