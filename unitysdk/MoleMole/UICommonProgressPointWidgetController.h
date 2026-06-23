#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_EC28E1D3A39EE7DE_6;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UICOMMONPROGRESSPOINTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x175C2B90)
#define MOLEMOLE_UICOMMONPROGRESSPOINTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x175C2C00)
#define MOLEMOLE_UICOMMONPROGRESSPOINTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x175C2CC0)
#define MOLEMOLE_UICOMMONPROGRESSPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x175C2D20)

namespace MoleMole
{
	inline static constexpr unsigned int UICommonProgressPointWidgetController_TypeDefinitionIndex = 82988;

	class UICommonProgressPointWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONPROGRESSPOINTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_EC28E1D3A39EE7DE_6* get__viewModel()
		{
			return ((::Class_2_EC28E1D3A39EE7DE_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONPROGRESSPOINTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONPROGRESSPOINTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONPROGRESSPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
