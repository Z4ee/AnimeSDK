#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_882B08B1385FC044;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER_GETTABBUTTON_OFFSET UNITYSDK_OFFSET(0x15B350D0)
#define MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15B34FC0)
#define MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15B35050)
#define MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15B34EF0)
#define MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15B34F50)
#define MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER_SETRANK_OFFSET UNITYSDK_OFFSET(0x15B35220)
#define MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x15B35130)
#define MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER_SHOWPOPUP_OFFSET UNITYSDK_OFFSET(0x15B35330)
#define MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B35640)
#define MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15B35840)
#define MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15B358D0)
#define MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15B35960)
#define MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15B359F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePveTabBtnRowWidgetController_TypeDefinitionIndex = 85024;

	class UIAutoBattlePveTabBtnRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_882B08B1385FC044* _view; // 0x2C0
		::MoleMole::UIGeneralNewHintWidgetController* _newHint; // 0x2C8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* _rankIconPathDict; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITabButton* GetTabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER_GETTABBUTTON_OFFSET))(this);
		}

		::System::Void SetText(::System::String* text, ::System::Boolean isUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER_SETTEXT_OFFSET))(this, text, isUnlock);
		}

		::System::Void SetRank(::System::Int32 rank)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER_SETRANK_OFFSET))(this, rank);
		}

		::System::Void ShowPopup(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER_SHOWPOPUP_OFFSET))(this, show);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVETABBTNROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
