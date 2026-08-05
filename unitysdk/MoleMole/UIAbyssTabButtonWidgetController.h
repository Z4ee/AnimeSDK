#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_8924D38FEB4DA006;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x1974FFD0)
#define MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER_INITICON_OFFSET UNITYSDK_OFFSET(0x197501D0)
#define MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197500C0)
#define MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19750150)
#define MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1974FFF0)
#define MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19750050)
#define MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER_REFRESHTEXT_OFFSET UNITYSDK_OFFSET(0x19750340)
#define MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x197503B0)
#define MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19750410)
#define MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x197504A0)
#define MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19750530)
#define MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x197505C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssTabButtonWidgetController_TypeDefinitionIndex = 78108;

	class UIAbyssTabButtonWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_8924D38FEB4DA006* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITabButton* get_Button()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER_GET_BUTTON_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitIcon(::System::Boolean empty, ::Foundation::AssetPath iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER_INITICON_OFFSET))(this, empty, iconPath);
		}

		::System::Void RefreshText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER_REFRESHTEXT_OFFSET))(this, text);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTABBUTTONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
