#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAbyssMapIconBaseController.h"
#include "unitysdk/MoleMole/UIAbyssMapIconBaseController_Style.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_1C66F7E56EF1134C;
namespace MoleMole { class MonoUIStyleColorConfig; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER_INITSTYLEINFO_OFFSET UNITYSDK_OFFSET(0x11D86F10)
#define MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11D87090)
#define MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11D87120)
#define MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11D86E80)
#define MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11D87020)
#define MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER_SETAFFIXICONINTERNAL_OFFSET UNITYSDK_OFFSET(0x11D87240)
#define MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER_SETICONINTERNAL_OFFSET UNITYSDK_OFFSET(0x11D87290)
#define MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER_SWITCHBIGICON_OFFSET UNITYSDK_OFFSET(0x11D871A0)
#define MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER_SWITCHSTYLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x11D872E0)
#define MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11D873B0)
#define MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11D87470)
#define MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11D87500)
#define MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11D87590)
#define MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11D87620)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssBossS2MapIconWidgetController_TypeDefinitionIndex = 89255;

	class UIAbyssBossS2MapIconWidgetController : public ::MoleMole::UIAbyssMapIconBaseController
	{
	public:
		::Class_2_1C66F7E56EF1134C* _view; // 0x2C8
		::MoleMole::MonoUIStyleColorConfig* _cacheColorConfig; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void InitStyleInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER_INITSTYLEINFO_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SwitchBigIcon(::System::Boolean isFinal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER_SWITCHBIGICON_OFFSET))(this, isFinal);
		}

		::System::Void SetAffixIconInternal(::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER_SETAFFIXICONINTERNAL_OFFSET))(this, iconPath);
		}

		::System::Void SetIconInternal(::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER_SETICONINTERNAL_OFFSET))(this, iconPath);
		}

		::System::Void SwitchStyleInternal(::MoleMole::UIAbyssMapIconBaseController_Style style, ::UnityEngine::Color baseColor)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAbyssMapIconBaseController_Style, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER_SWITCHSTYLEINTERNAL_OFFSET))(this, style, baseColor);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBOSSS2MAPICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
