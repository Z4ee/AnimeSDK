#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_FE052207AD27D9D6;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1917B100)
#define MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1917B210)
#define MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1917B190)
#define MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1917AF50)
#define MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1917B690)
#define MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1917B6A0)
#define MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1917B730)
#define MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1917B7D0)
#define MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1917B860)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkbenchMainPageSmallBtnWidgetController_TypeDefinitionIndex = 65368;

	class UIWorkbenchMainPageSmallBtnWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_FE052207AD27D9D6* _view; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
