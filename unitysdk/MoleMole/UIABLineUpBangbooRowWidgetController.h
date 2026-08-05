#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_410E84DCFF746137_5;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x190D1CE0)
#define MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x190D1DF0)
#define MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x190D1D70)
#define MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x190D1B80)
#define MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x190D2100)
#define MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x190D2090)
#define MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x190D23F0)
#define MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET UNITYSDK_OFFSET(0x190D2400)
#define MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x190D2460)
#define MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x190D24F0)
#define MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x190D2590)
#define MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x190D2620)

namespace MoleMole
{
	inline static constexpr unsigned int UIABLineUpBangbooRowWidgetController_TypeDefinitionIndex = 88055;

	class UIABLineUpBangbooRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_410E84DCFF746137_5* _view; // 0x2F0
		::System::Int32 _bangbooID; // 0x2F8
		::System::Action_1<::System::Int32>* OnClick; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER_SETINTERACTABLE_OFFSET))(this, interactable);
		}

		::System::Void _OnUIInit_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABLINEUPBANGBOOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
