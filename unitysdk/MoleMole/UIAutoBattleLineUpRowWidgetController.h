#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIAutoBattleLineUpRowWidgetController_DetailType.h"

class Class_2_208CC9941471731A_683;
class Class_2_FA864BDAF15B2A6B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_CREATEBANGBOOWIDGETROW_OFFSET UNITYSDK_OFFSET(0x18BEDDC0)
#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_CREATECAMPWIDGETROW_OFFSET UNITYSDK_OFFSET(0x18BEDCC0)
#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_CREATEITEMWIDGETROW_OFFSET UNITYSDK_OFFSET(0x18BEDEC0)
#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18BEC7C0)
#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_ONINFOBTNCLICK_OFFSET UNITYSDK_OFFSET(0x18BEE030)
#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x18BEDFC0)
#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18BEC8D0)
#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18BEC850)
#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18BEC380)
#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18BEC750)
#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_REFRESHAPPLYSTATUS_OFFSET UNITYSDK_OFFSET(0x18BED950)
#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18BECA20)
#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER__CREATEBANGBOOWIDGETROW_B__14_0_OFFSET UNITYSDK_OFFSET(0x18BEE340)
#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER__CREATECAMPWIDGETROW_B__13_0_OFFSET UNITYSDK_OFFSET(0x18BEE2E0)
#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER__CREATEITEMWIDGETROW_B__15_0_OFFSET UNITYSDK_OFFSET(0x18BEE3A0)
#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18BEE260)
#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER__ONUIINIT_B__6_0_OFFSET UNITYSDK_OFFSET(0x18BEE270)
#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18BEE400)
#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x18BEE490)
#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18BEE520)
#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18BEE5C0)
#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18BEE650)
#define MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18BEE6E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattleLineUpRowWidgetController_TypeDefinitionIndex = 64367;

	class UIAutoBattleLineUpRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_FA864BDAF15B2A6B* _view; // 0x2F0
		::System::Action_1<::System::Int32>* _onClick; // 0x2F8
		::System::Action_2<::MoleMole::UIAutoBattleLineUpRowWidgetController_DetailType, ::System::Int32>* OnClickDetail; // 0x300
		::System::Action_1<::System::Int32>* OnApplyBtnClick; // 0x308
		::Class_2_208CC9941471731A_683* _config; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshApplyStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_REFRESHAPPLYSTATUS_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateCampWidgetRow(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_CREATECAMPWIDGETROW_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateBangbooWidgetRow(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_CREATEBANGBOOWIDGETROW_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateItemWidgetRow(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_CREATEITEMWIDGETROW_OFFSET))(this, arg);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnInfoBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER_ONINFOBTNCLICK_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER__ONUIINIT_B__6_0_OFFSET))(this);
		}

		::System::Void _CreateCampWidgetRow_b__13_0(::System::Int32 campID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER__CREATECAMPWIDGETROW_B__13_0_OFFSET))(this, campID);
		}

		::System::Void _CreateBangbooWidgetRow_b__14_0(::System::Int32 bangbooID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER__CREATEBANGBOOWIDGETROW_B__14_0_OFFSET))(this, bangbooID);
		}

		::System::Void _CreateItemWidgetRow_b__15_0(::System::Int32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER__CREATEITEMWIDGETROW_B__15_0_OFFSET))(this, itemID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLELINEUPROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
