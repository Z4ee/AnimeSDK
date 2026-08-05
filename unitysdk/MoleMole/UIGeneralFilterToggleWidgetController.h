#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_A19A9F2D9E1D1B1E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIGENERALFILTERTOGGLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19EECDA0)
#define MOLEMOLE_UIGENERALFILTERTOGGLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19EECE10)
#define MOLEMOLE_UIGENERALFILTERTOGGLEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19EECED0)
#define MOLEMOLE_UIGENERALFILTERTOGGLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19EED030)
#define MOLEMOLE_UIGENERALFILTERTOGGLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19EED090)
#define MOLEMOLE_UIGENERALFILTERTOGGLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19EED130)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralFilterToggleWidgetController_TypeDefinitionIndex = 89011;

	class UIGeneralFilterToggleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERTOGGLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_A19A9F2D9E1D1B1E* get__viewModel()
		{
			return ((::Class_2_A19A9F2D9E1D1B1E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERTOGGLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERTOGGLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERTOGGLEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERTOGGLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERTOGGLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
