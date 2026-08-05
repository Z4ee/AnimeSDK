#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_BDFADB567191C26E;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15132960)
#define MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0x15132B00)
#define MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x15132A70)
#define MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15132C00)
#define MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151329F0)
#define MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15132810)
#define MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15132E00)
#define MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15132E10)
#define MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER___BASE_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0x15132EA0)
#define MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x15132F30)
#define MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15132FC0)
#define MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15133060)
#define MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x151330F0)

namespace MoleMole
{
	inline static constexpr unsigned int UITabBtn01Row_PhotoWidgetController_TypeDefinitionIndex = 58442;

	class UITabBtn01Row_PhotoWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_BDFADB567191C26E* _view; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER___BASE_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROW_PHOTOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
