#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_2DCBAFE28FF084D7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x162A6E00)
#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x162A6E70)
#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x162A6F30)
#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x162A7090)
#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x162A70F0)
#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x162A7190)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapLeftTastListRow02WidgetController_TypeDefinitionIndex = 43049;

	class UIUrbanMapLeftTastListRow02WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_2DCBAFE28FF084D7* get__viewModel()
		{
			return ((::Class_2_2DCBAFE28FF084D7*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02WIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
