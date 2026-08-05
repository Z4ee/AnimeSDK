#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_428;
class Class_2_4488253BDE4CA552;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18ED26A0)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER_ONJUMPCLICK_OFFSET UNITYSDK_OFFSET(0x18ED2D30)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18ED27B0)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18ED2730)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18ED24A0)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x18ED2CA0)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED2DF0)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER__ONJUMPCLICK_B__7_0_OFFSET UNITYSDK_OFFSET(0x18ED2E00)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18ED2EE0)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18ED2F70)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18ED3010)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18ED30A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookCampIdleItemWidgetController_TypeDefinitionIndex = 81683;

	class UIHandBookCampIdleItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_4488253BDE4CA552* _view; // 0x2F0
		::Class_2_208CC9941471731A_428* _cfg; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetEmpty(::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER_SETEMPTY_OFFSET))(this, isEmpty);
		}

		::System::Void OnJumpClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER_ONJUMPCLICK_OFFSET))(this);
		}

		::System::Void _OnJumpClick_b__7_0(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER__ONJUMPCLICK_B__7_0_OFFSET))(this, success);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
