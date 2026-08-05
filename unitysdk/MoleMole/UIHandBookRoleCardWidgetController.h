#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_E0691DCD748D31EC_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIHandBookRoleCardWidgetController_Context; }
namespace System { class Object; }

#define MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER_GETAVATARID_OFFSET UNITYSDK_OFFSET(0x190DDC70)
#define MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER_ISCHECKED_OFFSET UNITYSDK_OFFSET(0x190DDCE0)
#define MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x190DD600)
#define MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x190DD710)
#define MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x190DD690)
#define MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x190DD450)
#define MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER_SETCHECK_OFFSET UNITYSDK_OFFSET(0x190DDD50)
#define MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x190DDBC0)
#define MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x190DDDF0)
#define MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x190DDE00)
#define MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x190DDE90)
#define MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x190DDF30)
#define MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x190DDFC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookRoleCardWidgetController_TypeDefinitionIndex = 67171;

	class UIHandBookRoleCardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_E0691DCD748D31EC_1* _view; // 0x2F0
		::MoleMole::UIHandBookRoleCardWidgetController_Context* _data; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetEmpty(::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER_SETEMPTY_OFFSET))(this, isEmpty);
		}

		::System::Int32 GetAvatarID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER_GETAVATARID_OFFSET))(this);
		}

		::System::Boolean IsChecked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER_ISCHECKED_OFFSET))(this);
		}

		::System::Void SetCheck(::System::Boolean isChecked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER_SETCHECK_OFFSET))(this, isChecked);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
