#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_6BB4B294B3105A78;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIHANDBOOKTACTICSTABBTNROWWIDGETCONTROLLER_GETTABBUTTON_OFFSET UNITYSDK_OFFSET(0x186DC180)
#define MOLEMOLE_UIHANDBOOKTACTICSTABBTNROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186DC010)
#define MOLEMOLE_UIHANDBOOKTACTICSTABBTNROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x186DC120)
#define MOLEMOLE_UIHANDBOOKTACTICSTABBTNROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186DC0A0)
#define MOLEMOLE_UIHANDBOOKTACTICSTABBTNROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186DBFB0)
#define MOLEMOLE_UIHANDBOOKTACTICSTABBTNROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x186DC1E0)
#define MOLEMOLE_UIHANDBOOKTACTICSTABBTNROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x186DC800)
#define MOLEMOLE_UIHANDBOOKTACTICSTABBTNROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186DC810)
#define MOLEMOLE_UIHANDBOOKTACTICSTABBTNROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x186DC8A0)
#define MOLEMOLE_UIHANDBOOKTACTICSTABBTNROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186DC940)
#define MOLEMOLE_UIHANDBOOKTACTICSTABBTNROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186DC9D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookTacticsTabBtnRowWidgetController_TypeDefinitionIndex = 47162;

	class UIHandBookTacticsTabBtnRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_6BB4B294B3105A78* _view; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSTABBTNROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSTABBTNROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSTABBTNROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSTABBTNROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSTABBTNROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::UnityEngine::UI::Extension::UITabButton* GetTabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSTABBTNROWWIDGETCONTROLLER_GETTABBUTTON_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 trainType, ::System::String* trainName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSTABBTNROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, trainType, trainName);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSTABBTNROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSTABBTNROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSTABBTNROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSTABBTNROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
