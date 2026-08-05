#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_1710A4EE34865C78;
class Class_2_14B0BFEBE8C5942A_4;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIBangkovTaskSubPanelWidgetController_Context; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_AUTOSELECTTRACKEDORFIRSTQUEST_OFFSET UNITYSDK_OFFSET(0x195717C0)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_BUILDINGAMEQUESTLIST_OFFSET UNITYSDK_OFFSET(0x19570F40)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_BUILDOUTOFGAMEQUESTLIST_OFFSET UNITYSDK_OFFSET(0x19571190)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_GET_CURFOCUSED_OFFSET UNITYSDK_OFFSET(0x19570580)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19571D30)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_ONSCROLLVIEWSELECTHANDLE_OFFSET UNITYSDK_OFFSET(0x19571E40)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19570A20)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19571DC0)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19570710)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x195709B0)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19571F50)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_SETCANVASALPHA_OFFSET UNITYSDK_OFFSET(0x19571B00)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19572110)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x195721F0)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19572280)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19572320)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x195723B0)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19572440)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTaskSubPanelWidgetController_TypeDefinitionIndex = 52111;

	class UIBangkovTaskSubPanelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_14B0BFEBE8C5942A_4* _view; // 0x2C0
		::System::Collections::Generic::List_1<::Class_1_1710A4EE34865C78*>* _questList; // 0x2C8
		::MoleMole::MonoGamepadNavigatableList* m_naviList; // 0x2D0
		::Class_1_1710A4EE34865C78* _showData; // 0x2D8
		::MoleMole::UIBangkovTaskSubPanelWidgetController_Context* _context; // 0x2E0

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

		::System::Void SetCanvasAlpha()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_SETCANVASALPHA_OFFSET))(this);
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
