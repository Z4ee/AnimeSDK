#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_7BEEB90214042948_18;
namespace MoleMole { class UIBangbooMicroWebMessageRowWidgetController_RowData; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIBANGBOOMICROWEBMESSAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A63C6C0)
#define MOLEMOLE_UIBANGBOOMICROWEBMESSAGEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1A63C7E0)
#define MOLEMOLE_UIBANGBOOMICROWEBMESSAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A63C750)
#define MOLEMOLE_UIBANGBOOMICROWEBMESSAGEROWWIDGETCONTROLLER_REFRESHPANEL_OFFSET UNITYSDK_OFFSET(0x1A63C890)
#define MOLEMOLE_UIBANGBOOMICROWEBMESSAGEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A63CBA0)
#define MOLEMOLE_UIBANGBOOMICROWEBMESSAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A63CBB0)
#define MOLEMOLE_UIBANGBOOMICROWEBMESSAGEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1A63CC40)
#define MOLEMOLE_UIBANGBOOMICROWEBMESSAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A63CCE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebMessageRowWidgetController_TypeDefinitionIndex = 75308;

	class UIBangbooMicroWebMessageRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_7BEEB90214042948_18* _view; // 0x2F0
		::MoleMole::UIBangbooMicroWebMessageRowWidgetController_RowData* _data; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBMESSAGEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBMESSAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBMESSAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBMESSAGEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBMESSAGEROWWIDGETCONTROLLER_REFRESHPANEL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBMESSAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBMESSAGEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBMESSAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
