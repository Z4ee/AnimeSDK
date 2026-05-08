#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_1710A4EE34865C78;
class Class_2_14B0BFEBE8C5942A_7;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIBangkovTaskSubPanelWidgetController_Context; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_AUTOSELECTTRACKEDORFIRSTQUEST_OFFSET UNITYSDK_OFFSET(0x158BF9A0)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_BUILDINGAMEQUESTLIST_OFFSET UNITYSDK_OFFSET(0x158BF120)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_BUILDOUTOFGAMEQUESTLIST_OFFSET UNITYSDK_OFFSET(0x158BF370)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_GET_CURFOCUSED_OFFSET UNITYSDK_OFFSET(0x158BE760)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x158BFCF0)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_ONSCROLLVIEWSELECTHANDLE_OFFSET UNITYSDK_OFFSET(0x158BFE00)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x158BEC10)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x158BFD80)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x158BE900)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x158BEBA0)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x158BFF10)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x158C0000)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x158C00E0)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x158C0170)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x158C0210)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x158C02A0)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x158C0330)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTaskSubPanelWidgetController_TypeDefinitionIndex = 70998;

	class UIBangkovTaskSubPanelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_14B0BFEBE8C5942A_7* _view; // 0x2B8
		::System::Collections::Generic::List_1<::Class_1_1710A4EE34865C78*>* _questList; // 0x2C0
		::MoleMole::MonoGamepadNavigatableList* m_naviList; // 0x2C8
		::Class_1_1710A4EE34865C78* _showData; // 0x2D0
		::MoleMole::UIBangkovTaskSubPanelWidgetController_Context* _context; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_CurFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_GET_CURFOCUSED_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BuildInGameQuestList(::MoleMole::UIBangkovTaskSubPanelWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBangkovTaskSubPanelWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_BUILDINGAMEQUESTLIST_OFFSET))(this, context);
		}

		::System::Void BuildOutOfGameQuestList(::MoleMole::UIBangkovTaskSubPanelWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBangkovTaskSubPanelWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_BUILDOUTOFGAMEQUESTLIST_OFFSET))(this, context);
		}

		::System::Void AutoSelectTrackedOrFirstQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_AUTOSELECTTRACKEDORFIRSTQUEST_OFFSET))(this);
		}

		::System::Void OnScrollViewSelectHandle(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_ONSCROLLVIEWSELECTHANDLE_OFFSET))(this, obj);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
