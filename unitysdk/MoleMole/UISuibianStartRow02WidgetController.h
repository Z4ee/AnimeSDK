#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_BCA11629035BC7F2_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12C63CD0)
#define MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12C63D60)
#define MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12C63C00)
#define MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12C63C60)
#define MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER_REFRESHFINISH_OFFSET UNITYSDK_OFFSET(0x12C63E70)
#define MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x12C63F00)
#define MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER_SHOWPARTICLE_OFFSET UNITYSDK_OFFSET(0x12C63DE0)
#define MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER_TRYPLAYGETANIM_OFFSET UNITYSDK_OFFSET(0x12C63F90)
#define MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12C64190)
#define MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12C641F0)
#define MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12C64280)
#define MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12C64310)
#define MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12C643A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianStartRow02WidgetController_TypeDefinitionIndex = 72679;

	class UISuibianStartRow02WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_BCA11629035BC7F2_1* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowParticle(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER_SHOWPARTICLE_OFFSET))(this, show);
		}

		::System::Void RefreshFinish(::System::Boolean finish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER_REFRESHFINISH_OFFSET))(this, finish);
		}

		::System::Void SetEmpty(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER_SETEMPTY_OFFSET))(this, state);
		}

		::System::Void TryPlayGetAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER_TRYPLAYGETANIM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANSTARTROW02WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
