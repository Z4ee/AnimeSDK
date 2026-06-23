#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_88FAF023B58210B6;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIRABPOOLATTRIBUTEROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x156148D0)
#define MOLEMOLE_UIRABPOOLATTRIBUTEROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15614940)
#define MOLEMOLE_UIRABPOOLATTRIBUTEROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x156149E0)
#define MOLEMOLE_UIRABPOOLATTRIBUTEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15614B90)
#define MOLEMOLE_UIRABPOOLATTRIBUTEROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15614BF0)
#define MOLEMOLE_UIRABPOOLATTRIBUTEROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15614C90)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABPoolAttributeRowWidgetController_TypeDefinitionIndex = 41624;

	class UIRABPoolAttributeRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPOOLATTRIBUTEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_88FAF023B58210B6* get__viewModel()
		{
			return ((::Class_2_88FAF023B58210B6*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPOOLATTRIBUTEROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPOOLATTRIBUTEROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPOOLATTRIBUTEROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPOOLATTRIBUTEROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPOOLATTRIBUTEROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
