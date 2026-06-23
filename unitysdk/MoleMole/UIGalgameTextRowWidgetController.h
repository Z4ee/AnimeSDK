#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_23007A01AA84D4D9;
class Class_2_38857341919DCC25;
class MonoLayoutElementProcessor;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_GETTEXT_OFFSET UNITYSDK_OFFSET(0x19DF2E30)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19DF2C90)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19DF2DB0)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19DF2D20)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19DF2BE0)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x19DF2E90)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_SETSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x19DF2ED0)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER_UPDATELAYOUTHEIGHTRATIO_OFFSET UNITYSDK_OFFSET(0x19DF3080)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF3170)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19DF31C0)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19DF3250)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19DF32F0)
#define MOLEMOLE_UIGALGAMETEXTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19DF3380)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameTextRowWidgetController_TypeDefinitionIndex = 50860;

	class UIGalgameTextRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_38857341919DCC25* _view; // 0x2F0
		::MonoLayoutElementProcessor* _processor; // 0x2F8
		::Class_2_23007A01AA84D4D9* _sizeProcessor; // 0x300

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
