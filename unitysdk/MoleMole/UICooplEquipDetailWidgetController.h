#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_5B5A421822F92A6A;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UICOOPLEQUIPDETAILWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x158D99E0)
#define MOLEMOLE_UICOOPLEQUIPDETAILWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x158D9A50)
#define MOLEMOLE_UICOOPLEQUIPDETAILWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x158D9AF0)
#define MOLEMOLE_UICOOPLEQUIPDETAILWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x158D9C00)
#define MOLEMOLE_UICOOPLEQUIPDETAILWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x158D9C60)
#define MOLEMOLE_UICOOPLEQUIPDETAILWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x158D9D00)

namespace MoleMole
{
	inline static constexpr unsigned int UICooplEquipDetailWidgetController_TypeDefinitionIndex = 53381;

	class UICooplEquipDetailWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEQUIPDETAILWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_5B5A421822F92A6A* get__viewModel()
		{
			return ((::Class_2_5B5A421822F92A6A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEQUIPDETAILWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEQUIPDETAILWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEQUIPDETAILWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEQUIPDETAILWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEQUIPDETAILWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
