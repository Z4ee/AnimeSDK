#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_00784D8CAB9B806E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIRABENTRYREFRESHITEMROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1717E9D0)
#define MOLEMOLE_UIRABENTRYREFRESHITEMROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1717EA40)
#define MOLEMOLE_UIRABENTRYREFRESHITEMROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1717EAE0)
#define MOLEMOLE_UIRABENTRYREFRESHITEMROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1717EC90)
#define MOLEMOLE_UIRABENTRYREFRESHITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1717ECF0)
#define MOLEMOLE_UIRABENTRYREFRESHITEMROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1717ED90)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABEntryRefreshItemRowWidgetController_TypeDefinitionIndex = 77984;

	class UIRABEntryRefreshItemRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENTRYREFRESHITEMROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_00784D8CAB9B806E* get__viewModel()
		{
			return ((::Class_2_00784D8CAB9B806E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENTRYREFRESHITEMROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENTRYREFRESHITEMROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENTRYREFRESHITEMROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENTRYREFRESHITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENTRYREFRESHITEMROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
