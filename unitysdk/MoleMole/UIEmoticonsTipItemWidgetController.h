#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_82297B6AFFE49354;
class Class_2_964D8E1BC1392751;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIEMOTICONSTIPITEMWIDGETCONTROLLER_CLICKITEMBUTTON_OFFSET UNITYSDK_OFFSET(0x19717820)
#define MOLEMOLE_UIEMOTICONSTIPITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19716C80)
#define MOLEMOLE_UIEMOTICONSTIPITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19716D90)
#define MOLEMOLE_UIEMOTICONSTIPITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19716D10)
#define MOLEMOLE_UIEMOTICONSTIPITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19716B20)
#define MOLEMOLE_UIEMOTICONSTIPITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19716F30)
#define MOLEMOLE_UIEMOTICONSTIPITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19717870)
#define MOLEMOLE_UIEMOTICONSTIPITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197178B0)
#define MOLEMOLE_UIEMOTICONSTIPITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19717940)
#define MOLEMOLE_UIEMOTICONSTIPITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x197179E0)
#define MOLEMOLE_UIEMOTICONSTIPITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19717A70)

namespace MoleMole
{
	inline static constexpr unsigned int UIEmoticonsTipItemWidgetController_TypeDefinitionIndex = 52309;

	class UIEmoticonsTipItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_964D8E1BC1392751* _view; // 0x2F0
		::UnityEngine::Color maskColor; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOTICONSTIPITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOTICONSTIPITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOTICONSTIPITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOTICONSTIPITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOTICONSTIPITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void ClickItemButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOTICONSTIPITEMWIDGETCONTROLLER_CLICKITEMBUTTON_OFFSET))(this);
		}

		::System::Void RefreshView(::Class_1_82297B6AFFE49354* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_82297B6AFFE49354*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOTICONSTIPITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, context);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOTICONSTIPITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOTICONSTIPITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOTICONSTIPITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEMOTICONSTIPITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
