#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_4BD847A4391FE4E9;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRABBossTopTabWidgetController_Context; }

#define MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18217380)
#define MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x182173F0)
#define MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18217490)
#define MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER_SETCONTEXT_OFFSET UNITYSDK_OFFSET(0x18217640)
#define MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x182177C0)
#define MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18217820)
#define MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x182178C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBossTopTabWidgetController_TypeDefinitionIndex = 51945;

	class UIRABBossTopTabWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_4BD847A4391FE4E9* get__viewModel()
		{
			return ((::Class_2_4BD847A4391FE4E9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetContext(::MoleMole::UIRABBossTopTabWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRABBossTopTabWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER_SETCONTEXT_OFFSET))(this, context);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSTOPTABWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
