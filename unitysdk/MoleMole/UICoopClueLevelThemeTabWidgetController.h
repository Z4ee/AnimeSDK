#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_EC28E1D3A39EE7DE_30;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UICoopClueLevelThemeTabWidgetController_DataProxy; }

#define MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1854EDD0)
#define MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1854EE40)
#define MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1854EF00)
#define MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1854F0A0)
#define MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1854F100)
#define MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1854F1A0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopClueLevelThemeTabWidgetController_TypeDefinitionIndex = 81320;

	class UICoopClueLevelThemeTabWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::UICoopClueLevelThemeTabWidgetController_DataProxy* Data; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_EC28E1D3A39EE7DE_30* get__viewModel()
		{
			return ((::Class_2_EC28E1D3A39EE7DE_30*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
