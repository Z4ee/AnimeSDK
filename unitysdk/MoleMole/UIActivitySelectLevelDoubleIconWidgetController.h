#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_Corner.h"

class Class_2_BA39D6ED91527A4D;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x196F39C0)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196F40B0)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x196F38F0)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x196F3950)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETCLICKACTION_OFFSET UNITYSDK_OFFSET(0x196F3F90)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETID_OFFSET UNITYSDK_OFFSET(0x196F3A50)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETISPARTNERVIEW_OFFSET UNITYSDK_OFFSET(0x196E9F70)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETMAINTEXTVIEW_OFFSET UNITYSDK_OFFSET(0x196F3DE0)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETPARTNERTEXTVIEW_OFFSET UNITYSDK_OFFSET(0x196F3C30)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x196F4130)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x196F4210)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196F42A0)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x196F4330)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x196F43C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySelectLevelDoubleIconWidgetController_TypeDefinitionIndex = 83087;

	class UIActivitySelectLevelDoubleIconWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_BA39D6ED91527A4D* _view; // 0x2C0
		::UnityEngine::UI::GridLayoutGroup_Corner StartCorner; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralHeadRowWidgetController*>* heads; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetID(::System::Collections::Generic::List_1<::System::Int32>* ids, ::UnityEngine::UI::GridLayoutGroup_Corner StartCorner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::UnityEngine::UI::GridLayoutGroup_Corner))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETID_OFFSET))(this, ids, StartCorner);
		}

		::System::Void SetPartnerTextView(::System::String* title, ::System::String* teamTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETPARTNERTEXTVIEW_OFFSET))(this, title, teamTag);
		}

		::System::Void SetMainTextView(::System::String* title, ::System::String* teamTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETMAINTEXTVIEW_OFFSET))(this, title, teamTag);
		}

		::System::Void SetClickAction(::System::Action_1<::System::Int32>* click)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETCLICKACTION_OFFSET))(this, click);
		}

		::System::Void SetIsPartnerView(::System::Boolean isPartner, ::System::String* title, ::System::String* teamTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETISPARTNERVIEW_OFFSET))(this, isPartner, title, teamTag);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
