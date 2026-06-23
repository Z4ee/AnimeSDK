#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_596AFFF28AB28036;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x172E0A80)
#define MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x172E0AF0)
#define MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x172E0B90)
#define MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x172E0CA0)
#define MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x172E0D80)
#define MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x172E0DE0)
#define MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x172E0E80)
#define MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x172E0F20)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopClueBrokenClueWidgetController_TypeDefinitionIndex = 84421;

	class UICoopClueBrokenClueWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_596AFFF28AB28036* get__viewModel()
		{
			return ((::Class_2_596AFFF28AB28036*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}
	};
}
