#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_1CC0E2699D5FB1A6_5;
class Class_2_719AB4D2FEFA4E3C;
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIQUESTIONSANSWERLISTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1674C260)
#define MOLEMOLE_UIQUESTIONSANSWERLISTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1674C370)
#define MOLEMOLE_UIQUESTIONSANSWERLISTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1674C2F0)
#define MOLEMOLE_UIQUESTIONSANSWERLISTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1674C0B0)
#define MOLEMOLE_UIQUESTIONSANSWERLISTROWWIDGETCONTROLLER_REFRESHHANDLE_OFFSET UNITYSDK_OFFSET(0x1674C510)
#define MOLEMOLE_UIQUESTIONSANSWERLISTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1674CE60)
#define MOLEMOLE_UIQUESTIONSANSWERLISTROWWIDGETCONTROLLER__REFRESHHANDLE_B__6_0_OFFSET UNITYSDK_OFFSET(0x1674CE70)
#define MOLEMOLE_UIQUESTIONSANSWERLISTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1674CEE0)
#define MOLEMOLE_UIQUESTIONSANSWERLISTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1674CF70)
#define MOLEMOLE_UIQUESTIONSANSWERLISTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1674D010)
#define MOLEMOLE_UIQUESTIONSANSWERLISTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1674D0A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerListRowWidgetController_TypeDefinitionIndex = 48205;

	class UIQuestionsAnswerListRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_1CC0E2699D5FB1A6_5* _view; // 0x2F0
		::Class_2_719AB4D2FEFA4E3C* templateExt; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERLISTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERLISTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERLISTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERLISTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERLISTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERLISTROWWIDGETCONTROLLER_REFRESHHANDLE_OFFSET))(this, obj);
		}

		::System::Void _RefreshHandle_b__6_0(::UnityEngine::UI::Extension::UITimeWidget* widget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERLISTROWWIDGETCONTROLLER__REFRESHHANDLE_B__6_0_OFFSET))(this, widget);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERLISTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERLISTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERLISTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERLISTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
