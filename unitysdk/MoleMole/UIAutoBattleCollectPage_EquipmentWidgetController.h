#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_EC28E1D3A39EE7DE_14;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIAUTOBATTLECOLLECTPAGE_EQUIPMENTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1708D990)
#define MOLEMOLE_UIAUTOBATTLECOLLECTPAGE_EQUIPMENTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1708DA00)
#define MOLEMOLE_UIAUTOBATTLECOLLECTPAGE_EQUIPMENTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1708DAC0)
#define MOLEMOLE_UIAUTOBATTLECOLLECTPAGE_EQUIPMENTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1708DB20)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattleCollectPage_EquipmentWidgetController_TypeDefinitionIndex = 86765;

	class UIAutoBattleCollectPage_EquipmentWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLECOLLECTPAGE_EQUIPMENTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_EC28E1D3A39EE7DE_14* get__viewModel()
		{
			return ((::Class_2_EC28E1D3A39EE7DE_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLECOLLECTPAGE_EQUIPMENTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLECOLLECTPAGE_EQUIPMENTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLECOLLECTPAGE_EQUIPMENTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
