#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_14079CCE05A99882;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIRABSKILLDIALOGITEMROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16A82610)
#define MOLEMOLE_UIRABSKILLDIALOGITEMROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16A82680)
#define MOLEMOLE_UIRABSKILLDIALOGITEMROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16A82720)
#define MOLEMOLE_UIRABSKILLDIALOGITEMROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A82920)
#define MOLEMOLE_UIRABSKILLDIALOGITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16A82980)
#define MOLEMOLE_UIRABSKILLDIALOGITEMROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16A82A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABSkillDialogItemRowWidgetController_TypeDefinitionIndex = 53374;

	class UIRABSkillDialogItemRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSKILLDIALOGITEMROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_14079CCE05A99882* get__viewModel()
		{
			return ((::Class_2_14079CCE05A99882*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSKILLDIALOGITEMROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSKILLDIALOGITEMROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSKILLDIALOGITEMROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSKILLDIALOGITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSKILLDIALOGITEMROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
