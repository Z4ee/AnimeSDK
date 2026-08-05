#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_A7B0B3BF6E634A62;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIURBANMAPROLECARROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16787CE0)
#define MOLEMOLE_UIURBANMAPROLECARROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16787D50)
#define MOLEMOLE_UIURBANMAPROLECARROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16787E10)
#define MOLEMOLE_UIURBANMAPROLECARROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16787FE0)
#define MOLEMOLE_UIURBANMAPROLECARROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16788040)
#define MOLEMOLE_UIURBANMAPROLECARROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x167880E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRoleCarRowWidgetController_TypeDefinitionIndex = 83437;

	class UIUrbanMapRoleCarRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPROLECARROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_A7B0B3BF6E634A62* get__viewModel()
		{
			return ((::Class_2_A7B0B3BF6E634A62*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPROLECARROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPROLECARROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPROLECARROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPROLECARROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPROLECARROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
