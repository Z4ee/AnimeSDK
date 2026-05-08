#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_0AFFD56038657450;
namespace MoleMole { class UIArpeggioTalentDialogPopWindowController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER_ONCLICKCARDWIDGET_OFFSET UNITYSDK_OFFSET(0x13E33EE0)
#define MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13E33530)
#define MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13E335C0)
#define MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13E33460)
#define MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13E334C0)
#define MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER_SETCARDEFFECT_OFFSET UNITYSDK_OFFSET(0x13E33960)
#define MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER_SETCARDINFOWITHTALENTID_OFFSET UNITYSDK_OFFSET(0x13E33800)
#define MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER_SETTALENTDIALOG_OFFSET UNITYSDK_OFFSET(0x13E33640)
#define MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13E340A0)
#define MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13E34100)
#define MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13E34190)
#define MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13E34220)
#define MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13E342B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArpeggioCardWidgetController_TypeDefinitionIndex = 64958;

	class UIArpeggioCardWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_0AFFD56038657450* _view; // 0x2B8
		::System::UInt32 talentID; // 0x2C0
		::MoleMole::UIArpeggioTalentDialogPopWindowController* parentDialog; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetTalentDialog(::MoleMole::UIArpeggioTalentDialogPopWindowController* talentDialog)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIArpeggioTalentDialogPopWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER_SETTALENTDIALOG_OFFSET))(this, talentDialog);
		}

		::System::Void SetCardInfoWithTalentID(::System::UInt32 protoTalentID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER_SETCARDINFOWITHTALENTID_OFFSET))(this, protoTalentID);
		}

		::System::Void SetCardEffect(::System::Int32 rareIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER_SETCARDEFFECT_OFFSET))(this, rareIndex);
		}

		::System::Void OnClickCardWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER_ONCLICKCARDWIDGET_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOCARDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
