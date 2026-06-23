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

#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_INITSTYLEINFO_OFFSET UNITYSDK_OFFSET(0x17311E70)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17311FF0)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17312080)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17311E00)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17311F80)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_SETAFFIXICONINTERNAL_OFFSET UNITYSDK_OFFSET(0x17312100)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x17312230)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_SETDONEHOOK_OFFSET UNITYSDK_OFFSET(0x17312300)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_SETICONINTERNAL_OFFSET UNITYSDK_OFFSET(0x173121B0)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_SWITCHSTYLEINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x17312830)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER_SWITCHSTYLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x17312370)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17312A50)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17312AB0)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17312B40)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17312BD0)
#define MOLEMOLE_UIABYSSMAPICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17312C60)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssMapIconWidgetController_TypeDefinitionIndex = 74086;

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
