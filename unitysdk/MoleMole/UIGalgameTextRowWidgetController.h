#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_23007A01AA84D4D9;
class Class_2_38857341919DCC25;
class MonoLayoutElementProcessor;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_GETTEXT_OFFSET UNITYSDK_OFFSET(0x1465B850)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1465B6B0)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1465B7D0)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1465B740)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1465B600)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x1465B8B0)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_SETSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x1465B8F0)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_UPDATELAYOUTHEIGHTRATIO_OFFSET UNITYSDK_OFFSET(0x1465BAA0)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1465BB90)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1465BBE0)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1465BC70)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1465BD10)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1465BDA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameTextRowWidgetController_TypeDefinitionIndex = 59431;

	class UIGalgameTextRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_38857341919DCC25* _view; // 0x2E8
		::MonoLayoutElementProcessor* _processor; // 0x2F0
		::Class_2_23007A01AA84D4D9* _sizeProcessor; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::UnityEngine::UI::Text* GetText()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_GETTEXT_OFFSET))(this);
		}

		::System::Void PlayFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_PLAYFADEIN_OFFSET))(this);
		}

		::System::Void SetShowState(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_SETSHOWSTATE_OFFSET))(this, isShow);
		}

		::System::Void UpdateLayoutHeightRatio(::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_UPDATELAYOUTHEIGHTRATIO_OFFSET))(this, ratio);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
