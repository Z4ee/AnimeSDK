#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UITwoDMapElement_UIController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_DFB76FD9C0C6ACF0;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIURBANMAPDISTRICTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x162A5D00)
#define MOLEMOLE_UIURBANMAPDISTRICTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x162A5D70)
#define MOLEMOLE_UIURBANMAPDISTRICTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x162A5E30)
#define MOLEMOLE_UIURBANMAPDISTRICTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x162A5FB0)
#define MOLEMOLE_UIURBANMAPDISTRICTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x162A6010)
#define MOLEMOLE_UIURBANMAPDISTRICTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x162A60B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapDistrictWidgetController_TypeDefinitionIndex = 63694;

	class UIUrbanMapDistrictWidgetController : public ::MoleMole::UITwoDMapElement_UIController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPDISTRICTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_DFB76FD9C0C6ACF0* get__viewModel()
		{
			return ((::Class_2_DFB76FD9C0C6ACF0*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPDISTRICTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPDISTRICTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPDISTRICTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPDISTRICTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPDISTRICTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
