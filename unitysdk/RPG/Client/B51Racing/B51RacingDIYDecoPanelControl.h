#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingDIYDecoItemType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_1_80E89104401E1D26;
class Class_1_961B0CA014B1FC95;
class Class_1_E2FB7E5A9E3705C7_3;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_BUILDITEMVIEWMODELS_1_OFFSET UNITYSDK_OFFSET(0x19EEED00)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_BUILDITEMVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x19EEEA90)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_GETSELECTEDITEMID_OFFSET UNITYSDK_OFFSET(0x19EEDEE0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_SETCONTENTVISIBLE_OFFSET UNITYSDK_OFFSET(0x19EEDDD0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19EEDAA0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_SWITCHTOSTATE_OFFSET UNITYSDK_OFFSET(0x19EEDE70)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19EEEF80)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__GETSELECTEDITEMINDEX_OFFSET UNITYSDK_OFFSET(0x19EEE420)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__GETUINAVIGATIONZONEMANAGER_OFFSET UNITYSDK_OFFSET(0x19EEE9A0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__ONDECOITEMCLICKED_OFFSET UNITYSDK_OFFSET(0x19EEE7A0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__ONGETDECOITEM_OFFSET UNITYSDK_OFFSET(0x19EEE590)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19EED970)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__REFRESHACCESSORIESLIST_OFFSET UNITYSDK_OFFSET(0x19EEE1D0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__REFRESHCURRENTLIST_OFFSET UNITYSDK_OFFSET(0x19EEDC30)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__REFRESHPAINTLIST_OFFSET UNITYSDK_OFFSET(0x19EEDF80)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__SETUPNAVITARGET_OFFSET UNITYSDK_OFFSET(0x19EEE520)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__UPDATESELECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x19EEE900)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDIYDecoPanelControl_TypeDefinitionIndex = 80443;

	class B51RacingDIYDecoPanelControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::Int32 _MAX_DECO_NUM = 0x4; // 0x0
		::RPG::Client::StaticListView* _PaintListView; // 0x38
		::RPG::Client::StaticListView* _AccessoriesListView; // 0x40
		::RPG::Client::LocalizedText* _DecoTitle; // 0x48
		::RPG::Client::UIStateCtrl* _UIStateCtrl; // 0x50
		::System::Action_1<::System::UInt32>* OnDecoSelected; // 0x58
		::System::Boolean _PaintListInitialized; // 0x60
		::System::Boolean _AccessoriesListInitialized; // 0x61
		::System::Collections::Generic::Dictionary_2<::RPG::Client::B51Racing::B51RacingDIYDecoItemType, ::RPG::Client::TextID>* _ITEM_TYPE_TEXT_ID_MAP; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void SetContentVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_SETCONTENTVISIBLE_OFFSET))(this, a1);
		}

		::System::Void SwitchToState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_SWITCHTOSTATE_OFFSET))(this, a1);
		}

		::System::UInt32 GetSelectedItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_GETSELECTEDITEMID_OFFSET))(this);
		}

		::System::Void _RefreshCurrentList(::Class_1_80E89104401E1D26* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_80E89104401E1D26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__REFRESHCURRENTLIST_OFFSET))(this, a1);
		}

		::System::Void _RefreshPaintList(::Class_1_80E89104401E1D26* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_80E89104401E1D26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__REFRESHPAINTLIST_OFFSET))(this, a1);
		}

		::System::Void _RefreshAccessoriesList(::Class_1_80E89104401E1D26* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_80E89104401E1D26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__REFRESHACCESSORIESLIST_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* _OnGetDecoItem(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__ONGETDECOITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnDecoItemClicked(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__ONDECOITEMCLICKED_OFFSET))(this, a1);
		}

		::System::Void _UpdateSelectionState(::Class_1_80E89104401E1D26* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_80E89104401E1D26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__UPDATESELECTIONSTATE_OFFSET))(this, a1);
		}

		::System::Int32 _GetSelectedItemIndex(::Class_1_80E89104401E1D26* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_80E89104401E1D26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__GETSELECTEDITEMINDEX_OFFSET))(this, a1);
		}

		::System::Void _SetupNaviTarget(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__SETUPNAVITARGET_OFFSET))(this, a1);
		}

		::System::Void BuildItemViewModels(::Il2CppArray<::Class_1_E2FB7E5A9E3705C7_3*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_E2FB7E5A9E3705C7_3*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_BUILDITEMVIEWMODELS_OFFSET))(this, a1, a2);
		}

		::System::Void BuildItemViewModels_1(::Il2CppArray<::Class_1_961B0CA014B1FC95*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_961B0CA014B1FC95*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL_BUILDITEMVIEWMODELS_1_OFFSET))(this, a1, a2);
		}

		::RPG::UINavigation::UINavigationZoneManager* _GetUINavigationZoneManager()
		{
			return ((::RPG::UINavigation::UINavigationZoneManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL__GETUINAVIGATIONZONEMANAGER_OFFSET))(this);
		}
	};
}
