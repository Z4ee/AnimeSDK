#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_0_16E4307DCC419505_446;
class Class_2_C3EDD1939743B320_1;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x151AEEE0)
#define MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0x151AF0A0)
#define MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x151AEFF0)
#define MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x151AF1A0)
#define MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151AEF70)
#define MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x151AEDD0)
#define MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x151AF2F0)
#define MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x151AF360)
#define MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x151AF370)
#define MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER___BASE_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0x151AF400)
#define MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x151AF490)
#define MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x151AF520)
#define MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151AF5C0)
#define MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x151AF650)

namespace MoleMole
{
	inline static constexpr unsigned int UITabBtn05RowWidgetController_TypeDefinitionIndex = 49765;

	class UITabBtn05RowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_C3EDD1939743B320_1* _view; // 0x2F0
		::Class_0_16E4307DCC419505_446* _data; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetText(::System::String* titleText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER_SETTEXT_OFFSET))(this, titleText);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER___BASE_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN05ROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
