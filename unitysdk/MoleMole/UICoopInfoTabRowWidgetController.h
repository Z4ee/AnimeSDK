#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_9AA754434D23AD5B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER_GETUITABBUTTON_OFFSET UNITYSDK_OFFSET(0x18D39520)
#define MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18D39310)
#define MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18D393A0)
#define MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18D39240)
#define MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18D392A0)
#define MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER_SETTEXTMAPKEY_OFFSET UNITYSDK_OFFSET(0x18D39490)
#define MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x18D39420)
#define MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18D39580)
#define MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18D395E0)
#define MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18D39670)
#define MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18D39700)
#define MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18D39790)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopInfoTabRowWidgetController_TypeDefinitionIndex = 66572;

	class UICoopInfoTabRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_9AA754434D23AD5B* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER_SETTEXT_OFFSET))(this, text);
		}

		::System::Void SetTextmapKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER_SETTEXTMAPKEY_OFFSET))(this, key);
		}

		::UnityEngine::UI::Extension::UITabButton* GetUITabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER_GETUITABBUTTON_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPINFOTABROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
