#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_D077E21A712EBB23;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralFilterPopWindowController; }

#define MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x177131D0)
#define MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x17713240)
#define MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17713300)
#define MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x177133C0)
#define MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17713420)

namespace MoleMole
{
	inline static constexpr unsigned int UIForceSetOwnToggleWidgetController_TypeDefinitionIndex = 80869;

	class UIForceSetOwnToggleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_D077E21A712EBB23* get__viewModel()
		{
			return ((::Class_2_D077E21A712EBB23*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void Init(::MoleMole::UIGeneralFilterPopWindowController* popWindow, ::System::Int32 ownFilterGroupIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralFilterPopWindowController*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER_INIT_OFFSET))(this, popWindow, ownFilterGroupIndex);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
