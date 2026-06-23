#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHandBookPopWindowController_EHandBookTab.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E6E33155E3496BBE;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIHANDBOOKTABBTNSTIPSWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17208190)
#define MOLEMOLE_UIHANDBOOKTABBTNSTIPSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17208200)
#define MOLEMOLE_UIHANDBOOKTABBTNSTIPSWIDGETCONTROLLER_SETTABTYPE_OFFSET UNITYSDK_OFFSET(0x17208010)
#define MOLEMOLE_UIHANDBOOKTABBTNSTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x172082C0)
#define MOLEMOLE_UIHANDBOOKTABBTNSTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17208320)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookTabBtnsTipsWidgetController_TypeDefinitionIndex = 80068;

	class UIHandBookTabBtnsTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABBTNSTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetTabType(::MoleMole::UIHandBookPopWindowController_EHandBookTab tabType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHandBookPopWindowController_EHandBookTab))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABBTNSTIPSWIDGETCONTROLLER_SETTABTYPE_OFFSET))(this, tabType);
		}

		::Class_2_E6E33155E3496BBE* get__viewModel()
		{
			return ((::Class_2_E6E33155E3496BBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABBTNSTIPSWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABBTNSTIPSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTABBTNSTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
