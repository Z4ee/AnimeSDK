#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUEICONLISTCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19ED7FD0)
#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUEICONLISTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19EFCE20)
#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUEICONLISTCONTROL__ONGETITEM_OFFSET UNITYSDK_OFFSET(0x19EFC860)
#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUEICONLISTCONTROL__ONGETLITEVERSIONITEM_OFFSET UNITYSDK_OFFSET(0x19EFCA80)
#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUEICONLISTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19EFC800)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDevelopValueIconListControl_TypeDefinitionIndex = 80496;

	class B51RacingDevelopValueIconListControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::StaticListView* _ListView; // 0x38
		::System::Boolean _Initialized; // 0x40
		::System::Int32 _PrefebIndex; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUEICONLISTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUEICONLISTCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUEICONLISTCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* _OnGetItem(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUEICONLISTCONTROL__ONGETITEM_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::StaticListViewItem* _OnGetLiteVersionItem(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUEICONLISTCONTROL__ONGETLITEVERSIONITEM_OFFSET))(this, a1, a2, a3);
		}
	};
}
