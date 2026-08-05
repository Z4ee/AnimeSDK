#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAbyssMapIconBaseController.h"
#include "unitysdk/MoleMole/UIAbyssMapIconBaseController_Style.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_F2F58FC08BDC2A85;
namespace MoleMole { class MonoUIStyleColorConfig; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_INITSTYLEINFO_OFFSET UNITYSDK_OFFSET(0x18929F30)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1892A0B0)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1892A140)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18929EC0)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1892A040)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_SETAFFIXICONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1892A1C0)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1892A2F0)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_SETDONEHOOK_OFFSET UNITYSDK_OFFSET(0x1892A3C0)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_SETICONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1892A270)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_SWITCHSTYLEINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1892A8E0)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_SWITCHSTYLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1892A430)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1892AAF0)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1892AB50)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1892ABE0)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1892AC70)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1892AD00)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssMapIconWidgetController_TypeDefinitionIndex = 77576;

	class UIAbyssMapIconWidgetController : public ::MoleMole::UIAbyssMapIconBaseController
	{
	public:
		::Class_2_F2F58FC08BDC2A85* _view; // 0x2C8
		::MoleMole::MonoUIStyleColorConfig* _cacheColorConfig; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void InitStyleInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_INITSTYLEINFO_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetAffixIconInternal(::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_SETAFFIXICONINTERNAL_OFFSET))(this, iconPath);
		}

		::System::Void SetIconInternal(::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_SETICONINTERNAL_OFFSET))(this, iconPath);
		}

		::System::Void SetColor(::UnityEngine::Color dataItem2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_SETCOLOR_OFFSET))(this, dataItem2);
		}

		::System::Void SetDoneHook(::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_SETDONEHOOK_OFFSET))(this, b);
		}

		::System::Void SwitchStyleInternal(::MoleMole::UIAbyssMapIconBaseController_Style style, ::UnityEngine::Color baseColor)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAbyssMapIconBaseController_Style, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_SWITCHSTYLEINTERNAL_OFFSET))(this, style, baseColor);
		}

		::System::Void SwitchStyleInternal_1(::MoleMole::UIAbyssMapIconBaseController_Style style)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAbyssMapIconBaseController_Style))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_SWITCHSTYLEINTERNAL_1_OFFSET))(this, style);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
