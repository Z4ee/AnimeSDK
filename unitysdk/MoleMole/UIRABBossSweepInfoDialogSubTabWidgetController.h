#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_5C42B2DC54021744;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15F27C20)
#define MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15F27C90)
#define MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15F27D30)
#define MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F27EE0)
#define MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15F27F40)
#define MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15F27FE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBossSweepInfoDialogSubTabWidgetController_TypeDefinitionIndex = 87292;

	class UIRABBossSweepInfoDialogSubTabWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_5C42B2DC54021744* get__viewModel()
		{
			return ((::Class_2_5C42B2DC54021744*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
