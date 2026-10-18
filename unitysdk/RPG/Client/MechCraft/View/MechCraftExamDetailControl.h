#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_98E68E4FC3F60295;
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client::MechCraft::View { class MechCraftExamDetailControlBinder; }
namespace Sofa { class ShortCutHintControl; }
namespace SuperScrollView { class LoopGridView; }
namespace SuperScrollView { class LoopGridViewItem; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD63FAB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_GET_SHORTCUTHINTCONTROL_OFFSET UNITYSDK_OFFSET(0xD6404D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_METHOD_5_0EA1ACE7302D5DD1_OFFSET UNITYSDK_OFFSET(0xD63FB50)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_METHOD_5_39D15CE61EDA5424_OFFSET UNITYSDK_OFFSET(0xD640A90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_METHOD_5_6E29E5B460E9BD61_OFFSET UNITYSDK_OFFSET(0xD6419E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_METHOD_5_999B7157EBB84294_OFFSET UNITYSDK_OFFSET(0xD641680)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_METHOD_5_CFCEA107D822E3B3_OFFSET UNITYSDK_OFFSET(0xD6410C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD63FAF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD641DA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL___REFRESHASSISTANTS_B__12_0_OFFSET UNITYSDK_OFFSET(0xD641DC0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL___REFRESHASSISTANTS_B__12_1_OFFSET UNITYSDK_OFFSET(0xD641DD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL___REFRESHREQUIREMENTINFOS_B__10_0_OFFSET UNITYSDK_OFFSET(0xD641DB0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftExamDetailControl_TypeDefinitionIndex = 79958;

	class MechCraftExamDetailControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_98E68E4FC3F60295* LFGMLJCCPCH; // 0x18
		::System::Boolean AOJBOBBEJLB; // 0x20
		::System::Boolean CPFCDHPNKPN; // 0x21
		::RPG::Client::MechCraft::View::MechCraftExamDetailControlBinder* _Binder; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL__CTOR_OFFSET))(this);
		}

		::Class_1_98E68E4FC3F60295* get_Content()
		{
			return ((::Class_1_98E68E4FC3F60295*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::Class_1_98E68E4FC3F60295* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_98E68E4FC3F60295*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::Sofa::ShortCutHintControl* get_ShortCutHintControl()
		{
			return ((::Sofa::ShortCutHintControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_GET_SHORTCUTHINTCONTROL_OFFSET))(this);
		}

		::System::Void Method_5_0EA1ACE7302D5DD1(::Class_1_98E68E4FC3F60295* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_98E68E4FC3F60295*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_METHOD_5_0EA1ACE7302D5DD1_OFFSET))(this, a1);
		}

		::System::Void Method_5_39D15CE61EDA5424(::Class_1_98E68E4FC3F60295* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_98E68E4FC3F60295*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_METHOD_5_39D15CE61EDA5424_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* Method_5_999B7157EBB84294(::RPG::Client::StaticListView* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_METHOD_5_999B7157EBB84294_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_CFCEA107D822E3B3(::Class_1_98E68E4FC3F60295* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_98E68E4FC3F60295*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_METHOD_5_CFCEA107D822E3B3_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopGridViewItem* Method_5_6E29E5B460E9BD61(::System::Int32 a1)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_METHOD_5_6E29E5B460E9BD61_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* __RefreshRequirementInfos_b__10_0(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL___REFRESHREQUIREMENTINFOS_B__10_0_OFFSET))(this, a1, a2, a3);
		}

		::SuperScrollView::LoopGridViewItem* __RefreshAssistants_b__12_0(::XLua::LuaTable* a1, ::SuperScrollView::LoopGridView* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL___REFRESHASSISTANTS_B__12_0_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void __RefreshAssistants_b__12_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL___REFRESHASSISTANTS_B__12_1_OFFSET))(this);
		}
	};
}
